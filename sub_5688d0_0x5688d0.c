// 函数名称: sub_5688d0
// 虚拟地址: 0x5688d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**sub_5688d0(int32_t** arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_3
    int32_t eax_3
    int32_t* edx
    edx:eax_3 = sx.q((arg3 - arg2) s>> 2)
    int32_t* i = &arg2[(eax_3 - edx) s>> 1]
    int32_t var_24 = arg4
    int32_t var_28 = arg3 - 4
    sub_568a70(arg2, i, edx, arg3 - 4)
    void* ebx = &i[1]
    void* var_8 = ebx
    
    for (; arg2 u< i; i = &i[-1])
        if (arg4(&i[-1], i) != 0)
            break
        
        if (arg4(i, &i[-1]) != 0)
            break
    
    if (ebx u< arg3)
        do
            if (arg4(ebx, i) != 0)
                break
            
            if (arg4(i, ebx) != 0)
                break
            
            ebx += 4
        while (ebx u< arg3)
        
        var_8 = ebx
    
    int32_t* i_1 = i
    void* edi_3 = ebx
    int32_t* i_2 = i_1
    
    while (true)
        if (edi_3 u< arg3)
            do
                if (arg4(i, edi_3) == 0)
                    if (arg4(edi_3, i) != 0)
                        break
                    
                    int32_t ecx_2 = *ebx
                    *ebx = *edi_3
                    ebx += 4
                    *edi_3 = ecx_2
                
                edi_3 += 4
            while (edi_3 u< arg3)
            
            i_1 = i_2
            var_8 = ebx
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* ebx_1 = &i_1[-1]
            void* i_3
            
            do
                if (arg4(ebx_1, i) == 0)
                    if (arg4(i, ebx_1) != 0)
                        break
                    
                    int32_t eax_17 = i[-1]
                    i -= 4
                    *i = *ebx_1
                    *ebx_1 = eax_17
                
                i_3 = i_2 - 4
                ebx_1 -= 4
                i_2 = i_3
            while (arg2 u< i_3)
            i_1 = i_2
            ebx = var_8
            cond:0_1 = i_1 != arg2
        
        if (cond:0_1)
            i_1 -= 4
            i_2 = i_1
            
            if (edi_3 != arg3)
                int32_t ecx_9 = *edi_3
                *edi_3 = *i_1
                *i_1 = ecx_9
                edi_3 += 4
            else
                i -= 4
                
                if (i_1 != i)
                    int32_t ecx_7 = *i_1
                    *i_1 = *i
                    *i = ecx_7
                
                int32_t edx_8 = *(ebx - 4)
                int32_t ecx_8 = *i
                ebx -= 4
                *i = edx_8
                var_8 = ebx
                *ebx = ecx_8
        else
            if (edi_3 == arg3)
                break
            
            if (ebx != edi_3)
                int32_t ecx_4 = *i
                *i = *ebx
                *ebx = ecx_4
            
            int32_t edx_3 = *i
            *i = *edi_3
            void* edx_6 = edi_3
            ebx += 4
            i = &i[1]
            var_8 = ebx
            edi_3 += 4
            *edx_6 = edx_3
    
    *arg1 = i
    arg1[1] = ebx
    return arg1
}
