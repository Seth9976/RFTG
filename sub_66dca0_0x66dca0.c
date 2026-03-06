// 函数名称: sub_66dca0
// 虚拟地址: 0x66dca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66dca0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t i_8 = *ebx
    
    if (ebx[2].b != 3)
        return 
    
    char* eax
    eax.b = *(ebx + 9)
    int32_t edi_1
    
    if (eax.b u>= 8)
        edi_1 = arg2
    else
        uint32_t eax_1 = zx.d(eax.b)
        
        if (eax_1 == 1)
            char* esi_9 = ((i_8 - 1) u>> 3) + arg2
            char* edi_3 = i_8 + arg2 - 1
            eax = 7 - ((i_8 - 1) & 7)
            
            if (i_8 == 0)
                goto label_66ddc2
            
            int32_t i_7 = i_8
            int32_t i
            
            do
                ebx.b = *esi_9
                int32_t ecx_5
                ecx_5.b = eax.b
                ebx.b u>>= ecx_5.b
                ebx.b &= 1
                *edi_3 = ebx.b
                
                if (eax != 7)
                    eax = &eax[1]
                else
                    eax = nullptr
                    esi_9 -= 1
                
                edi_3 -= 1
                i = i_7
                i_7 -= 1
            while (i != 1)
        label_66ddbf:
            ebx = arg1
        label_66ddc2:
            edi_1 = arg2
        label_66ddc5:
            *(ebx + 9) = 8
            *(ebx + 0xb) = 8
            ebx[1] = i_8
        else
            if (eax_1 == 2)
                char* esi_6 = ((i_8 - 1) u>> 2) + arg2
                char* edi_2 = i_8 + arg2 - 1
                eax = (3 - ((i_8 - 1) & 3)) * 2
                
                if (i_8 == 0)
                    goto label_66ddc2
                
                int32_t i_6 = i_8
                int32_t i_1
                
                do
                    ebx.b = *esi_6
                    int32_t ecx_3
                    ecx_3.b = eax.b
                    ebx.b u>>= ecx_3.b
                    ebx.b &= 3
                    *edi_2 = ebx.b
                    
                    if (eax != 6)
                        eax = &eax[2]
                    else
                        eax = nullptr
                        esi_6 -= 1
                    
                    edi_2 -= 1
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                goto label_66ddbf
            
            if (eax_1 != 4)
                goto label_66ddc2
            
            edi_1 = arg2
            char* var_8_1 = i_8 + edi_1 - 1
            char* esi_3 = ((i_8 - 1) u>> 1) + edi_1
            eax = (i_8 & 1) * 4
            
            if (i_8 == 0)
                goto label_66ddc5
            
            int32_t i_5 = i_8
            int32_t i_2
            
            do
                ebx.b = *esi_3
                ebx.b u>>= eax.b
                ebx.b &= 0xf
                *var_8_1 = ebx.b
                
                if (eax != 4)
                    eax = &eax[4]
                else
                    eax = nullptr
                    esi_3 -= 1
                
                var_8_1 -= 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            ebx = arg1
            *(ebx + 9) = 8
            *(ebx + 0xb) = 8
            ebx[1] = i_8
    
    if (*(ebx + 9) != 8)
        return 
    
    char* ecx_6 = i_8 + edi_1 - 1
    
    if (arg5 s> 0)
        int32_t esi_10 = i_8 << 2
        char* eax_11 = esi_10 + edi_1 - 1
        
        if (i_8 != 0)
            int32_t i_3
            
            do
                uint32_t esi_11 = zx.d(*ecx_6)
                
                if (esi_11 s< arg5)
                    int32_t ebx_1
                    ebx_1.b = *(esi_11 + arg4)
                    *eax_11 = ebx_1.b
                else
                    *eax_11 = 0xff
                
                eax_11[0xffffffff] = *(zx.d(*ecx_6) * 3 + arg3 + 2)
                eax_11[0xfffffffe] = *(zx.d(*ecx_6) * 3 + arg3 + 1)
                eax_11[0xfffffffd] = *(zx.d(*ecx_6) * 3 + arg3)
                eax_11 -= 4
                ecx_6 -= 1
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
            ebx = arg1
        
        ebx[1] = esi_10
        ebx[2] = 0x20040806
        return 
    
    int32_t esi_15 = i_8 * 3
    eax = esi_15 + edi_1 - 1
    
    if (i_8 != 0)
        int32_t i_4
        
        do
            *eax = *(zx.d(*ecx_6) * 3 + arg3 + 2)
            eax[0xffffffff] = *(zx.d(*ecx_6) * 3 + arg3 + 1)
            eax[0xfffffffe] = *(zx.d(*ecx_6) * 3 + arg3)
            eax -= 3
            ecx_6 -= 1
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
        ebx = arg1
    
    ebx[2] = 0x18030802
    ebx[1] = esi_15
}
