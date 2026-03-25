const tasks = [
  {file: "array_tasks/build_arr_from_permutation/sol.cpp"},
  {file: "array_tasks/concat_of_arrs/sol.cpp"},
  {file: "array_tasks/contains_duplicates/sol.cpp"},
  {file: "array_tasks/decompress_rle-list/sol.cpp"},
  {file: "array_tasks/left_right_sum_diff/sol.cpp"},
  {file: "array_tasks/longest_common_prefix/sol.cpp"},
  {file: "array_tasks/missing_values/sol.cpp"},
  {file: "array_tasks/num_employees_met_target/sol.cpp"},
  {file: "array_tasks/number_good_pairs/sol.cpp"},
  {file: "array_tasks/plus_one/sol.py"},
  {file: "array_tasks/rank_transform_arr/sol.py"},
  {file: "array_tasks/reachest_customer_wealth/sol.cpp"},
  {file: "array_tasks/running_sum_arr/sol.cpp"},
  {file: "array_tasks/search_insert_position/sol.cpp"},
  {file: "array_tasks/shuffle_array/sol.cpp"},
  {file: "array_tasks/single_number/sol.cpp"},
  {file: "array_tasks/smaller_numbers_current/sol.cpp"},
  {file: "array_tasks/sort_arr_by_parity/sol.py"},
  {file: "array_tasks/subrectangle_queries/sol.cpp"},
  {file: "array_tasks/two_sums/sol.cpp"},

  {file: "bitwise_operations/counting_bits/sol.cpp"},
  {file: "bitwise_operations/decode_xored_arr/sol.cpp"},
  {file: "bitwise_operations/number_of_1_bits/sol.cpp"},
  {file: "bitwise_operations/reverse_bits/sol.cpp"},
  {file: "bitwise_operations/xor_in_arr/sol.cpp"},

  {file: "linked_list/design_linked_list/sol.cpp"},
  {file: "linked_list/merge_two_sorted_lists/sol.cpp"},
  {file: "linked_list/palindrome_linkedlist/sol.cpp"},
  {file: "linked_list/reverse_linked_list/sol.cpp"},

  {file: "math_tasks/add_integers/sol.cpp"},
  {file: "math_tasks/arranging_coins/sol.cpp"},
  {file: "math_tasks/climbing_stairs/sol.cpp"},
  {file: "math_tasks/convert_temperature/sol.cpp"},
  {file: "math_tasks/hamming_distance/sol.cpp"},
  {file: "math_tasks/happy_numbers/sol.cpp"},
  {file: "math_tasks/max_achievable_number/sol.cpp"},
  {file: "math_tasks/palindrome_number/sol.cpp"},
  {file: "math_tasks/power_of_two/sol.cpp"},
  {file: "math_tasks/smallest_even_multiple/sol.cpp"},
  {file: "math_tasks/sqrt/sol.cpp"},
  {file: "math_tasks/subtract_product_and_sum/sol.cpp"},
  {file: "math_tasks/sum_multiples/sol.cpp"},

  {file: "stack/implement_stack_using_queue/sol.cpp"},

  {file: "string_tasks/add_binary/sol.cpp"},
  {file: "string_tasks/balanced_string_split/sol.cpp"},
  {file: "string_tasks/defanging_ip/sol.cpp"},
  {file: "string_tasks/find_index_string/sol.cpp"},
  {file: "string_tasks/find_the_diff/sol.cpp"},
  {file: "string_tasks/first_unique_char_in_str/sol.cpp"},
  {file: "string_tasks/fizz_buzz/sol.cpp"},
  {file: "string_tasks/goal_parser_interpretation/sol.cpp"},
  {file: "string_tasks/isomorphic_strings/sol.cpp"},
  {file: "string_tasks/jewels_stones/sol.cpp"},
  {file: "string_tasks/keyboard_row/sol.py"},
  {file: "string_tasks/len_last_word/sol.cpp"},
  {file: "string_tasks/max_69_num/sol.cpp"},
  {file: "string_tasks/max_num_words_in_sentence/sol.cpp"},
  {file: "string_tasks/partition_into_deci_binary/sol.cpp"},
  {file: "string_tasks/perform_ops/sol.cpp"},
  {file: "string_tasks/reverse_string/sol.cpp"},
  {file: "string_tasks/roman_to_integer/sol.cpp"},
  {file: "string_tasks/tenth_line/sol.sh"},
  {file: "string_tasks/to_lower_case/sol.cpp"},
  {file: "string_tasks/valid_anagram/sol.py"},
  {file: "string_tasks/valid_palindrrome/sol.cpp"},
  {file: "string_tasks/valid_parentheses/sol.cpp"},

  {file: "tree_tasks/array_to_bst/sol.cpp"},
  {file: "tree_tasks/balanced_binary_tree/sol.cpp"},
  {file: "tree_tasks/binary_tree_inorder/sol.cpp"},
  {file: "tree_tasks/count_nodes_eqaul_avg_subtree/sol.cpp"},
  {file: "tree_tasks/deepest_levels_sum/sol.cpp"},
  {file: "tree_tasks/find_node_bt/sol.cpp"},
  {file: "tree_tasks/invert_binary_tree/sol.cpp"},
  {file: "tree_tasks/max_depth_binary_tree/sol.cpp"},
  {file: "tree_tasks/min_depth_bt/sol.cpp"},
  {file: "tree_tasks/path_sum/sol.cpp"},
  {file: "tree_tasks/range_sum_bst/sol.cpp"},
  {file: "tree_tasks/reverse_odd_levels_bt/sol.cpp"},
  {file: "tree_tasks/root_equal_sum_children/sol.cpp"},
  {file: "tree_tasks/same_tree/sol.cpp"},
  {file: "tree_tasks/symetric_tree/sol.cpp"},
];

const metaGithub = (typeof document !== 'undefined') && document.querySelector && document.querySelector('meta[name="github-base"]');
const metaBranch = (typeof document !== 'undefined') && document.querySelector && document.querySelector('meta[name="github-branch"]');
const storedBase = (typeof localStorage !== 'undefined') ? localStorage.getItem('leetcode_github_base') : null;
const storedBranch = (typeof localStorage !== 'undefined') ? localStorage.getItem('leetcode_github_branch') : null;
const githubBase = (metaGithub && metaGithub.content) ? metaGithub.content.replace(/\/$/, '') : (storedBase || '');
const githubBranch = (metaBranch && metaBranch.content) ? metaBranch.content : (storedBranch || 'main');

const validTasks = tasks.filter(t => typeof t.file === 'string' && t.file.includes('/'));

let fuse = null;
function initFuse(){
  try{
    const list = validTasks.map(t=>({
      file: t.file,
      title: nameOf(t.file),
      folder: folderOf(t.file),
      ext: extOf(t.file)
    }));
    fuse = new Fuse(list, {keys:[{name:'title',weight:0.6},{name:'folder',weight:0.3},{name:'file',weight:0.1}],threshold:0.35});
  }catch(e){ fuse = null; }
}
initFuse();

const themeToggle = document.getElementById('themeToggle');
function applyTheme(t){
  if(t==='dark') document.body.classList.add('dark'); else document.body.classList.remove('dark');
}
const storedTheme = (typeof localStorage !== 'undefined') ? localStorage.getItem('leetcode_theme') : null;
applyTheme(storedTheme || 'light');
if(themeToggle){
  themeToggle.checked = (storedTheme === 'dark');
  themeToggle.addEventListener('change', ()=>{
    const now = themeToggle.checked ? 'dark' : 'light';
    applyTheme(now);
    try{ localStorage.setItem('leetcode_theme', now); }catch(e){}
  });
}

function applyHlTheme(theme){
  try{
    const hlLight = document.getElementById('hl-light');
    const hlDark = document.getElementById('hl-dark');
    if(!hlLight || !hlDark) return;
    if(theme === 'dark'){
      hlLight.disabled = true;
      hlDark.disabled = false;
    } else {
      hlLight.disabled = false;
      hlDark.disabled = true;
    }
    setTimeout(()=>{ document.querySelectorAll('pre code').forEach(el=>{ if(window.hljs) hljs.highlightElement(el); }); }, 120);
  }catch(e){}
}
applyHlTheme(storedTheme || 'light');

if(themeToggle){ themeToggle.addEventListener('change', ()=>{ const now = themeToggle.checked ? 'dark' : 'light'; applyHlTheme(now); }); }

function extOf(path){return path.split('.').pop();}
function folderOf(path){const parts = path.split('/'); return parts.slice(0, -1).join('/');}
function nameOf(path){const parts = path.split('/'); const name = parts[parts.length-2]; return name.replace(/[_-]/g,' ').replace(/\b\w/g, c=>c.toUpperCase());}

const grid = document.getElementById('grid');
const pagination = document.getElementById('pagination');
const searchInput = document.getElementById('search');
const perPageSelect = document.getElementById('perPage');

let state = { page: 1, perPage: Number(perPageSelect.value), query: '' };

function filtered(){
  const q = state.query.trim();
  if(!q) return validTasks;
  if(fuse){
    const res = fuse.search(q);
    return res.map(r=> validTasks.find(t=>t.file === r.item.file));
  }
  const ql = q.toLowerCase();
  return validTasks.filter(t=>{
    const p = t.file.toLowerCase();
    const n = nameOf(t.file).toLowerCase();
    const f = folderOf(t.file).toLowerCase();
    const e = extOf(t.file).toLowerCase();
    return p.includes(ql) || n.includes(ql) || f.includes(ql) || e.includes(ql);
  });
}

function render(){
  const list = filtered();
  const total = list.length;
  const per = state.perPage;
  const pages = Math.max(1, Math.ceil(total / per));
  if(state.page > pages) state.page = pages;
  const start = (state.page - 1) * per;
  const shown = list.slice(start, start + per);

  grid.innerHTML = shown.map(t=>{
    const title = nameOf(t.file);
    const folder = folderOf(t.file);
    const ext = extOf(t.file);
    const gh = githubBase ? `${githubBase.replace(/\/$/, '')}/blob/${githubBranch}/${t.file}` : '';
    const rawBase = githubBase ? githubBase.replace('https://github.com','https://raw.githubusercontent.com').replace(/\/$/, '') : '';
    const raw = rawBase ? `${rawBase}/${githubBranch}/${t.file}` : '';
    const ghData = gh || '';
    const ghClass = gh ? 'link view-gh' : 'link view-gh disabled';
    const previewClass = raw ? 'preview-btn' : 'preview-btn disabled';
    return `
      <article class="card">
        <h3>${title}</h3>
        <div class="meta">
          <span class="badge">${folder}</span>
          <span class="badge">${ext}</span>
        </div>
        <div style="margin-top:auto;display:flex;gap:8px;align-items:center">
          <button class="${previewClass}" data-raw="${raw}">Preview</button>
          <a class="${ghClass}" data-gh="${ghData}" style="opacity:${gh? '1':'0.6'}">View on GitHub</a>
        </div>
      </article>`;
  }).join('');

  document.querySelectorAll('.view-gh').forEach(a=>{
    const ghurl = a.getAttribute('data-gh');
    if(ghurl){
      a.setAttribute('href', ghurl);
      a.setAttribute('target','_blank');
      a.setAttribute('rel','noopener');
      a.addEventListener('click', e=>{});
    } else {
      a.addEventListener('click', e=>{
        e.preventDefault();
        const input = prompt('Enter your GitHub repo URL (e.g. https://github.com/user/repo) to enable View on GitHub links:');
        if(!input) return;
        const cleaned = input.trim().replace(/\/$/, '');
        try{
          if(!/^https:\/\/github.com\/.+\/.+/.test(cleaned)) throw new Error('invalid');
          localStorage.setItem('leetcode_github_base', cleaned);
          const branch = prompt('Optional: enter branch name (default: main):','main');
          if(branch) localStorage.setItem('leetcode_github_branch', branch.trim());
          alert('Saved. Reloading to update links.');
          location.reload();
        }catch(err){
          alert('Invalid GitHub repo URL. Please try again.');
        }
      });
    }
  });

  document.querySelectorAll('.preview-btn').forEach(b=>{
    const raw = b.getAttribute('data-raw');
    if(raw){
      b.addEventListener('click', async ()=>{
        try{
          const card = b.parentElement.parentElement
          var lang = card.querySelector('.badge:nth-of-type(2)').textContent;
          const codeEl = document.getElementById('preview-code');
          const titleEl = document.getElementById('preview-title');
          titleEl.textContent = b.closest('.card').querySelector('h3').textContent + ' — ' + b.closest('.card').querySelector('.badge').textContent;
          const res = await fetch(raw);
          const text = await res.text();
          codeEl.textContent = text;
          if (lang == "py") lang = "python";
          else if (lang == "sh") lang = "bash";
          codeEl.className = `language-${lang.toLowerCase()}`
          
          console.log(codeEl.className)
          if(window.hljs) hljs.highlightElement(codeEl);
          const modal = document.getElementById('preview-modal');
          modal.setAttribute('aria-hidden','false');
        }catch(err){
          alert('Failed to load preview.');
        }
      });
    }
  });

  // modal controls
  const closeBtn = document.getElementById('closePreview');
  const copyBtn = document.getElementById('copyBtn');
  if(closeBtn) closeBtn.addEventListener('click', ()=>{ document.getElementById('preview-modal').setAttribute('aria-hidden','true');});
  if (copyBtn) {
    copyBtn.addEventListener('click', () => {
      const codeEl = document.getElementById('preview-code');
      if (!codeEl) return;
      
      navigator.clipboard && navigator.clipboard.writeText(codeEl.textContent)
        .then(() => {
          const originalText = copyBtn.textContent;
          copyBtn.innerHTML = '&#10004; Copied';
          copyBtn.style.color = '#10b981';
          copyBtn.style.borderColor = '#10b981';
          setTimeout(() => {
            copyBtn.textContent = originalText;
            copyBtn.style.color = '';
            copyBtn.style.borderColor = '';
          }, 2000);
        })
        .catch(() => {
          const originalText = copyBtn.textContent;
          copyBtn.textContent = 'Failed';
          copyBtn.style.color = 'red';
          
          setTimeout(() => {
            copyBtn.textContent = originalText;
            copyBtn.style.color = '';
          }, 2000);
        });
    });
  }

  pagination.innerHTML = '';
  function btn(label, i, active=false){
    const b = document.createElement('button');
    b.textContent = label;
    b.className = 'page-btn' + (active? ' active':'');
    b.onclick = ()=>{ state.page = i; render(); };
    return b;
  }

  if(pages <= 1) return;
  const prev = document.createElement('button'); prev.className='page-btn'; prev.textContent='Prev'; prev.onclick = ()=>{ if(state.page>1){state.page--;render()} };
  pagination.appendChild(prev);

  const startPage = Math.max(1, state.page - 3);
  const endPage = Math.min(pages, state.page + 3);
  for(let i=startPage;i<=endPage;i++){
    pagination.appendChild(btn(i, i, i===state.page));
  }

  const next = document.createElement('button'); next.className='page-btn'; next.textContent='Next'; next.onclick = ()=>{ if(state.page<pages){state.page++;render()} };
  pagination.appendChild(next);
}

searchInput.addEventListener('input', e=>{ state.query = e.target.value; state.page = 1; render(); });
perPageSelect.addEventListener('change', e=>{ state.perPage = Number(e.target.value); state.page = 1; render(); });

render();
