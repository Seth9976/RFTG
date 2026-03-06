// 函数名称: sub_607460
// 虚拟地址: 0x607460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607460(char* arg1)
{
    // 第一条实际指令: if ((*arg1 & 2) != 0)
    if ((*arg1 & 2) != 0)
        sub_6073a0(arg1, 1)
    
    void* edx = *(arg1 + 4)
    
    if (*(edx + 8) u>= 8 && *(arg1 + 0x14) != 0)
        void* ecx_1 = *(arg1 + 0x34)
        int32_t eax_1 = *(ecx_1 + 0x44)
        
        if ((eax_1 & 0x110) != 0 && (eax_1.b & 1) == 0 && ((eax_1.b & 2) == 0 || *(edx + 0x18) == 0)
                && (eax_1.b & 0x60) == 0 && (eax_1 & 0x200) == 0)
            if (*(edx + 0x18) != 0 && (eax_1.b & 0x10) != 0)
                if (sub_606a20(arg1) s>= 0)
                    *(*(arg1 + 0x34) + 8) = sub_605fc0
                    void* eax_4 = *(arg1 + 0x34)
                    *(eax_4 + 0x44) |= 0x4000
                    *arg1 |= 2
                    return 0
            else if (*(ecx_1 + 4) != 0 && sub_606f70(arg1) s>= 0)
                *(*(arg1 + 0x34) + 8) = sub_604c40
                void* eax_7 = *(arg1 + 0x34)
                *(eax_7 + 0x44) |= 0x2000
                *arg1 |= 2
                return 0
    
    return 0xffffffff
}
