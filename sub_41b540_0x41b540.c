// 函数名称: sub_41b540
// 虚拟地址: 0x41b540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_41b540(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 0x2d u<= 0x93)
    if (arg1 - 0x2d u<= 0x93)
        switch (arg1 + &jump_table_41b62c[0xf]:3)
            case &lookup_table_41b698
                return 0x57d
            case &lookup_table_41b698[1]
                return 0x57c
            case &lookup_table_41b698[2]
                return 0x57b
            case &lookup_table_41b698[3]
                return 0x57e
            case &lookup_table_41b698[4]
                return 0x579
            case &lookup_table_41b698[5]
                return 0x57a
            case &lookup_table_41b698[0x1d]
                return 0x583
            case &lookup_table_41b698[0x1f]
                return 0x581
            case &lookup_table_41b698[0x26]
                return 0x580
            case &lookup_table_41b698[0x2d]
                return 0x582
            case &lookup_table_41b698[0x35]
                return 0x584
            case &lookup_table_41b698[0x36]
                return 0x57f
            case &lookup_table_41b698[0x3c]
                return 0x585
            case &lookup_table_41b698[0x3d]
                return 0x586
            case &lookup_table_41b698[0x43]
                return 0x587
            case &lookup_table_41b698[0x53]
                return 0x588
            case &lookup_table_41b698[0x54]
                return 0x589
            case &lookup_table_41b698[0x55]
                return 0x58a
            case &lookup_table_41b698[0x56]
                return 0x58b
            case &lookup_table_41b698[0x57]
                return 0x58c
            case &lookup_table_41b698[0x58]
                return 0x58d
            case &lookup_table_41b698[0x76]
                return 0x58e
            case &lookup_table_41b698[0x77]
                return 0x58f
            case &lookup_table_41b698[0x8c]
                return 0x590
            case &lookup_table_41b698[0x8e]
                return 0x591
            case &lookup_table_41b698[0x93]
                return 0x592
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x806, "Get6PtStat")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
