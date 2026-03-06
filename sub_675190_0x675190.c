// 函数名称: sub_675190
// 虚拟地址: 0x675190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_675190(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t* eax_1 = *(arg1 + 0x1c)
        
        if (eax_1 != 0)
            eax_1[7] = 0
            *(arg1 + 0x14) = 0
            *(arg1 + 8) = 0
            *(arg1 + 0x18) = 0
            int32_t edx = eax_1[2]
            
            if (edx != 0)
                *(arg1 + 0x30) = edx & 1
            
            *eax_1 = 0
            eax_1[1] = 0
            eax_1[3] = 0
            eax_1[8] = 0
            eax_1[0xe] = 0
            eax_1[0xf] = 0
            eax_1[5] = 0x8000
            eax_1[0x1b] = &eax_1[0x14c]
            eax_1[0x14] = &eax_1[0x14c]
            eax_1[0x13] = &eax_1[0x14c]
            eax_1[0x6f0] = 1
            eax_1[0x6f1] = 0xffffffff
            return 0
    
    return 0xfffffffe
}
