// 函数名称: sub_4f3900
// 虚拟地址: 0x4f3900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_4f3900(void** arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_3
    int32_t eax_3
    int32_t* edx
    edx:eax_3 = sx.q((arg3 - arg2) s>> 3)
    void* i = &arg2[((eax_3 - edx) s>> 1) * 2]
    int32_t var_50 = arg4
    int32_t var_54 = arg3 - 8
    sub_4f3b20(arg2, edx, arg3 - 8, i)
    int32_t* ebx = i + 8
    int32_t* var_8 = ebx
    
    for (; arg2 u< i; i -= 8)
        if (arg4(i - 8, i) != 0)
            break
        
        if (arg4(i, i - 8) != 0)
            break
    
    if (ebx u< arg3)
        do
            if (arg4(ebx, i) != 0)
                break
            
            if (arg4(i, ebx) != 0)
                break
            
            ebx = &ebx[2]
        while (ebx u< arg3)
        
        var_8 = ebx
    
    void* i_1 = i
    int32_t* edi_3 = ebx
    void* i_2 = i_1
    
    while (true)
        if (edi_3 u< arg3)
            do
                if (arg4(i, edi_3) == 0)
                    if (arg4(edi_3, i) != 0)
                        break
                    
                    int32_t edx_1 = ebx[1]
                    int32_t ecx_2 = *ebx
                    *ebx = *edi_3
                    ebx[1] = edi_3[1]
                    ebx = &ebx[2]
                    *edi_3 = ecx_2
                    edi_3[1] = edx_1
                
                edi_3 = &edi_3[2]
            while (edi_3 u< arg3)
            
            i_1 = i_2
            var_8 = ebx
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* ebx_1 = i_1 - 8
            void* i_3
            
            do
                if (arg4(ebx_1, i) == 0)
                    if (arg4(i, ebx_1) != 0)
                        break
                    
                    int32_t eax_18 = *(i - 8)
                    int32_t ecx_3 = *(i - 4)
                    i -= 8
                    *i = *ebx_1
                    *(i + 4) = *(ebx_1 + 4)
                    *ebx_1 = eax_18
                    *(ebx_1 + 4) = ecx_3
                
                i_3 = i_2 - 8
                ebx_1 -= 8
                i_2 = i_3
            while (arg2 u< i_3)
            i_1 = i_2
            ebx = var_8
            cond:0_1 = i_1 != arg2
        
        if (cond:0_1)
            i_1 -= 8
            i_2 = i_1
            
            if (edi_3 != arg3)
                int32_t edx_23 = edi_3[1]
                int32_t ecx_12 = *edi_3
                *edi_3 = *i_1
                edi_3[1] = *(i_1 + 4)
                *i_1 = ecx_12
                *(i_1 + 4) = edx_23
                edi_3 = &edi_3[2]
            else
                i -= 8
                
                if (i_1 != i)
                    int32_t edx_17 = *(i_1 + 4)
                    int32_t ecx_8 = *i_1
                    *i_1 = *i
                    *(i_1 + 4) = *(i + 4)
                    *i = ecx_8
                    *(i + 4) = edx_17
                
                int32_t edx_20 = *(i + 4)
                int32_t ecx_10 = *i
                ebx -= 8
                *i = *ebx
                *(i + 4) = ebx[1]
                *ebx = ecx_10
                var_8 = ebx
                ebx[1] = edx_20
        else
            if (edi_3 == arg3)
                break
            
            if (ebx != edi_3)
                int32_t edx_6 = *(i + 4)
                int32_t ecx_4 = *i
                *i = *ebx
                *(i + 4) = ebx[1]
                *ebx = ecx_4
                ebx[1] = edx_6
            
            int32_t edx_9 = *i
            int32_t edx_10 = *(i + 4)
            *i = *edi_3
            *(i + 4) = edi_3[1]
            int32_t* ecx_7 = edi_3
            ebx = &ebx[2]
            *ecx_7 = edx_9
            i += 8
            var_8 = ebx
            edi_3 = &edi_3[2]
            ecx_7[1] = edx_10
    
    *arg1 = i
    arg1[1] = ebx
    return arg1
}
