// 函数名称: sub_603470
// 虚拟地址: 0x603470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_603470(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t* eax_3 = *(arg1[0x1b] + 0x18)
        
        if (eax_3 != 0)
            if (*eax_3 != 0)
                sub_611240(eax_3)
            
            void* ecx = arg1[0x1b]
            
            if (*(ecx + 0x14) == 1)
                *(ecx + 4) = arg1[4]
                *(arg1[0x1b] + 8) = arg1[5]
                sub_5c9a50(arg1, 0xfffffc18, 0xfffffc18)
            
            return 0
    
    return 0xffffffff
}
