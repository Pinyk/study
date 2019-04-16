package com.link;

public class Main {
    public static void main(String[] args) {
        Link all=new Link();
        all.add("A");
        all.add("B");
        all.add("C");
        all.remove("A");
        System.out.println(all.size());
        Object data[] = all.toArray();
        for(int x=0;x<data.length;x++){
            String str = (String)data[x];
            System.out.print(str+"、");
        }
        System.out.print("\n");
        all.clear();
        System.out.println(all.size());
    }
}
