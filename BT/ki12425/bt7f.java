import java.io.*;
import java.util.*;

class sv{
    public String msv,ten,lop,email,sdt;

    sv(String a,String b,String c,String d,String e){
        msv = a;
        ten = b;
        lop = c;
        email = d;
        sdt = "0"+e;
    }
}

class doan{
    public String msv,ten,gv,tendoan,sdt;
    
    doan(String a,String b,String c,String d,String e){
        msv = a;
        ten = b;
        gv = c;
        tendoan = d;
        sdt = e;
    }

    public String toString(){
        return msv+" "+ten+" "+gv+" "+tendoan+" "+sdt;
    }
}

public class bt7f {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("DANHSACH.in"));
        Map<String,sv> svmap = new HashMap<>();

        String line;
        while((line=br.readLine())!=null){
            String a = line.trim();
            String b = br.readLine().trim();
            String c = br.readLine().trim();
            String d = br.readLine().trim();
            String e = br.readLine().trim();

            svmap.put(a,new sv(a,b,c,d,e));
        }
        br.close();
        br = new BufferedReader(new FileReader("HUONGDAN.in"));
        List<doan> doanlist = new ArrayList<>();
        int sogv = Integer.parseInt(br.readLine().trim());
        for (int i=0;i<sogv;i++){
            String[] gvinfo = br.readLine().split(" ");
            String tengv = String.join(" ",Arrays.copyOfRange(gvinfo,0,gvinfo.length-1));
            int n = Integer.parseInt(gvinfo[gvinfo.length-1].trim());
            for(int j=0;j<n;j++){
                String[] doaninfo = br.readLine().split(" ",2);
                String masv = doaninfo[0].trim();
                String tendoan = doaninfo[1].trim();
                sv SV = svmap.get(masv);
                if(SV!=null){
                    doanlist.add(new doan(masv,SV.ten,tengv,tendoan,SV.sdt));
                }
            }
        }
        br.close();

        doanlist.sort(Comparator.comparing(o->o.msv));
        for(doan d :doanlist){
            System.out.println(d);
        }
    }
}
