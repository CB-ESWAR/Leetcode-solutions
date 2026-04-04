class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        ArrayList<ArrayList<Integer>> g=new ArrayList<>();
        int[] indeg=new int[numCourses];
        for(int i=0;i<numCourses;i++)g.add(new ArrayList<>());
        for(int[] p :prerequisites){
            g.get(p[1]).add(p[0]);
            indeg[p[0]]++;
        }
        Queue<Integer> q=new LinkedList<>();
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0)q.add(i);
        }
        int c=0;
        while(!q.isEmpty()){
            int cur=q.poll();
            c++;
            for(int n:g.get(cur)){
                indeg[n]--;
                if(indeg[n]==0)q.add(n);
            }
        }
        return numCourses==c;
    }
}