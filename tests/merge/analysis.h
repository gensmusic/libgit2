#ifndef INCLUDE_cl_merge_analysis_h__
#define INCLUDE_cl_merge_analysis_h__

void testimpl_merge_analysis__initialize(git_repository *t_repo, git_index *t_repo_index);
void testimpl_merge_analysis__cleanup(void);
void testimpl_merge_analysis__fastforward(void);
void testimpl_merge_analysis__no_fastforward(void);
void testimpl_merge_analysis__uptodate(void);
void testimpl_merge_analysis__uptodate_merging_prev_commit(void);
void testimpl_merge_analysis__unborn(void);
void testimpl_merge_analysis__fastforward_with_config_noff(void);
void testimpl_merge_analysis__no_fastforward_with_config_ffonly(void);
void testimpl_merge_analysis__between_uptodate_refs(void);
void testimpl_merge_analysis__between_noff_refs(void);

#endif