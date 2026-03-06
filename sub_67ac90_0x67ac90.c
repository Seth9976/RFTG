// 函数名称: sub_67ac90
// 虚拟地址: 0x67ac90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67ac90(void** arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void** ecx_1 = arg1
    int32_t* ebx = ecx_1[6]
    char* esi = *ebx
    int32_t edi = ebx[1]
    uint32_t i_1
    
    while (true)
        if (edi == 0)
            if (ebx[3](ecx_1) == 0)
                return 0
            
            esi = *ebx
            edi = ebx[1]
            ecx_1 = arg1
        
        uint32_t eax_3 = zx.d(*esi)
        edi -= 1
        esi = &esi[1]
        
        if (eax_3 != 0xff)
            uint32_t i
            
            do
                void* eax_4 = ecx_1[0x6e]
                *(eax_4 + 0x18) += 1
                *ebx = esi
                ebx[1] = edi
                
                if (edi == 0)
                    if (ebx[3](ecx_1) == 0)
                        return 0
                    
                    esi = *ebx
                    edi = ebx[1]
                    ecx_1 = arg1
                
                i = zx.d(*esi)
                edi -= 1
                esi = &esi[1]
            while (i != 0xff)
        
        do
            if (edi == 0)
                if (ebx[3](ecx_1) == 0)
                    return 0
                
                esi = *ebx
                edi = ebx[1]
                ecx_1 = arg1
            
            i_1 = zx.d(*esi)
            edi -= 1
            esi = &esi[1]
        while (i_1 == 0xff)
        
        if (i_1 != 0)
            break
        
        void* eax_7 = ecx_1[0x6e]
        *(eax_7 + 0x18) += 2
        *ebx = esi
        ebx[1] = edi
    
    if (*(ecx_1[0x6e] + 0x18) != 0)
        *(*ecx_1 + 0x14) = 0x74
        *(*ecx_1 + 0x18) = *(ecx_1[0x6e] + 0x18)
        *(*ecx_1 + 0x1c) = i_1
        (*(*ecx_1 + 4))(ecx_1, 0xffffffff)
        *(arg1[0x6e] + 0x18) = 0
        ecx_1 = arg1
    
    ecx_1[0x68] = i_1
    ebx[1] = edi
    *ebx = esi
    return 1
}
