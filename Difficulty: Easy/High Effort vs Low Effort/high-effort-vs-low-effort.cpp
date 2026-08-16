class Solution {
  public:
      int maxTask(vector<int>& h, vector<int>& l) {
          int n = h.size();

          int noTask = 0;
          int task = 0;

          for (int i = 0; i < n; i++) {
              int newNoTask = max(noTask, task);

              int newTask = max(noTask, task) + l[i];

              // High-effort task is possible only if
              // previous day had no task
              newTask = max(newTask, noTask + h[i]);

              noTask = newNoTask;
              task = newTask;
          }

          return max(noTask, task);
      }
  };