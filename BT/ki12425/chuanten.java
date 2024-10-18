import java.util.Scanner;

public class chuanten {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            int type = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            String name[] = s.split("\\s+");
            StringBuilder sb = new StringBuilder();
            if(type==1){
                sb.append(Character.toUpperCase(name[name.length-1].charAt(0)));
                sb.append(name[name.length-1].substring(1).toLowerCase());
                sb.append(" ");
                for(int i=0;i<name.length - 1;i++){
                    if(name[i].length()>0){
                        sb.append(Character.toUpperCase(name[i].charAt(0)));
                        sb.append(name[i].substring(1).toLowerCase());
                        sb.append(" ");
                    }
                }
                System.out.println(sb.toString().trim());
            }else{
                for(int i=1;i<name.length ;i++){
                    if(name[i].length()>0){
                        sb.append(Character.toUpperCase(name[i].charAt(0)));
                        sb.append(name[i].substring(1).toLowerCase());
                        sb.append(" ");
                    }
                }
                sb.append(Character.toUpperCase(name[0].charAt(0)));
                sb.append(name[0].substring(1).toLowerCase());
                System.out.println(sb.toString().trim());
            }
        }
    }
}