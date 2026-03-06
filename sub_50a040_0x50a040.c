// 函数名称: sub_50a040
// 虚拟地址: 0x50a040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_50a040(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t** arg5)
{
    // 第一条实际指令: int32_t* i_1 = arg3
    int32_t* i_1 = arg3
    int32_t* edi = data_30785d8
    int32_t* ecx = *edi
    int32_t* i = nullptr
    int32_t* edx
    
    do
        edx = *ecx
        
        if (edx != 0)
            break
        
        i += 1
        ecx = &ecx[1]
    while (i u<= edi[1])
    
    int32_t* esi_1 = edx
    
    if (edx != 0)
        while (true)
            int32_t* eax = esi_1[2]
            int32_t* ebx_1 = esi_1
            
            if (eax == 0)
                char* const eax_1 = *esi_1
                
                if (eax_1 == 0)
                    eax_1 = &data_83f3d3
                
                int32_t eax_2 = sub_519130(eax_1)
                int32_t edx_1 = edi[1]
                int32_t ecx_3 = (edx_1 & eax_2) + 1
                
                if (ecx_3 u<= edx_1)
                    int32_t** eax_4 = *edi + (ecx_3 << 2)
                    
                    do
                        esi_1 = *eax_4
                        
                        if (esi_1 != 0)
                            goto label_50a0b4
                        
                        ecx_3 += 1
                        eax_4 = &eax_4[1]
                    while (ecx_3 u<= edx_1)
                
                esi_1 = nullptr
            else
                esi_1 = eax
            
        label_50a0b4:
            i = ebx_1[1]
            bool cond:0_1 = i[2] == 0
            i_1 = i
            
            if (not(cond:0_1) && i[1] == arg4)
                i = sub_518190(arg5, &i_1)
            
            if (esi_1 == 0)
                break
            
            edi = data_30785d8
    
    return i
}
