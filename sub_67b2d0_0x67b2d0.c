// 函数名称: sub_67b2d0
// 虚拟地址: 0x67b2d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67b2d0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ebx = arg1
    int32_t esi = ebx[0x68]
    *(*ebx + 0x14) = 0x79
    *(*ebx + 0x18) = esi
    int32_t edi = arg2
    *(*ebx + 0x1c) = edi
    (*(*ebx + 4))(ebx, 0xffffffff)
    
    while (true)
        int32_t edi_4
        
        if (esi s< 0xc0)
            edi_4 = 2
        else if (esi - 0xd0 u> 7 || esi == ((edi + 1) & 7) + 0xd0 || esi == ((edi + 2) & 7) + 0xd0)
            edi_4 = 3
        else if (esi == ((edi - 1) & 7) + 0xd0 || esi == ((edi - 2) & 7) + 0xd0)
            edi_4 = 2
        else
            edi_4 = 1
        
        *(*ebx + 0x14) = 0x61
        *(*ebx + 0x18) = esi
        *(*ebx + 0x1c) = edi_4
        (*(*ebx + 4))(ebx, 4)
        
        if (edi_4 == 1)
            ebx[0x68] = 0
            break
        
        if (edi_4 == 2)
            int32_t* ebx_1 = ebx[6]
            char* esi_1 = *ebx_1
            int32_t edi_8 = ebx_1[1]
            uint32_t i_1
            int32_t* ecx_9
            
            while (true)
                if (edi_8 == 0)
                    if (ebx_1[3](arg1) == 0)
                        return 0
                    
                    esi_1 = *ebx_1
                    edi_8 = ebx_1[1]
                
                uint32_t eax_9 = zx.d(*esi_1)
                edi_8 -= 1
                esi_1 = &esi_1[1]
                
                if (eax_9 == 0xff)
                    ecx_9 = arg1
                else
                    uint32_t i
                    
                    do
                        ecx_9 = arg1
                        void* eax_10 = ecx_9[0x6e]
                        *(eax_10 + 0x18) += 1
                        *ebx_1 = esi_1
                        ebx_1[1] = edi_8
                        
                        if (edi_8 == 0)
                            if (ebx_1[3](ecx_9) == 0)
                                return 0
                            
                            esi_1 = *ebx_1
                            edi_8 = ebx_1[1]
                            ecx_9 = arg1
                        
                        i = zx.d(*esi_1)
                        edi_8 -= 1
                        esi_1 = &esi_1[1]
                    while (i != 0xff)
                
                do
                    if (edi_8 == 0)
                        if (ebx_1[3](ecx_9) == 0)
                            return 0
                        
                        esi_1 = *ebx_1
                        edi_8 = ebx_1[1]
                        ecx_9 = arg1
                    
                    i_1 = zx.d(*esi_1)
                    edi_8 -= 1
                    esi_1 = &esi_1[1]
                while (i_1 == 0xff)
                
                if (i_1 != 0)
                    break
                
                void* ecx_10 = ecx_9[0x6e]
                *(ecx_10 + 0x18) += 2
                *ebx_1 = esi_1
                ebx_1[1] = edi_8
            
            if (*(ecx_9[0x6e] + 0x18) != 0)
                *(*ecx_9 + 0x14) = 0x74
                *(*ecx_9 + 0x18) = *(ecx_9[0x6e] + 0x18)
                *(*ecx_9 + 0x1c) = i_1
                (*(*ecx_9 + 4))(ecx_9, 0xffffffff)
                *(arg1[0x6e] + 0x18) = 0
                ecx_9 = arg1
            
            ecx_9[0x68] = i_1
            ebx_1[1] = edi_8
            edi = arg2
            *ebx_1 = esi_1
            esi = ecx_9[0x68]
            ebx = arg1
        else
            if (edi_4 == 3)
                break
            
            edi = arg2
    
    return 1
}
