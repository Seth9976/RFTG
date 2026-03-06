// 函数名称: sub_464510
// 虚拟地址: 0x464510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_464510(int32_t* arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_3
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q((arg3 - arg2) s>> 2)
    int32_t* i = &arg2[(eax_3 - edx) s>> 1]
    sub_4e31d0(arg2, i, arg3 - 4, arg4)
    void* i_1 = &i[1]
    void* i_2 = i_1
    
    for (; arg2 u< i; i = &i[-1])
        if (arg4(i[-1], *i) != 0)
            break
        
        if (arg4(*i, i[-1]) != 0)
            break
    
    if (i_1 u< arg3)
        do
            if (arg4(*i_1, *i) != 0)
                break
            
            if (arg4(*i, *i_1) != 0)
                break
            
            i_1 += 4
        while (i_1 u< arg3)
        
        i_2 = i_1
    
    int32_t* i_4 = i
    int32_t* i_5 = i
    
    while (true)
        for (; i_1 u< arg3; i_1 += 4)
            if (arg4(*i_5, *i_1) == 0)
                if (arg4(*i_1, *i_5) != 0)
                    break
                
                void* i_6 = i_2
                i_2 += 4
                int32_t ecx_8 = *i_6
                *i_6 = *i_1
                *i_1 = ecx_8
        
        bool cond:0_1 = i_4 != arg2
        
        if (i_4 u> arg2)
            do
                if (arg4(i_4[-1], *i_5) == 0)
                    if (arg4(*i_5, i_4[-1]) != 0)
                        break
                    
                    int32_t eax_21 = i_5[-1]
                    i_5 -= 4
                    *i_5 = i_4[-1]
                    i_4[-1] = eax_21
                
                i_4 = &i_4[-1]
            while (arg2 u< i_4)
            
            cond:0_1 = i_4 != arg2
        
        if (cond:0_1)
            i_4 -= 4
            
            if (i_1 != arg3)
                int32_t eax_26 = *i_1
                *i_1 = *i_4
                *i_4 = eax_26
                i_1 += 4
            else
                i_5 -= 4
                
                if (i_4 != i_5)
                    int32_t eax_24 = *i_4
                    *i_4 = *i_5
                    *i_5 = eax_24
                
                int32_t ecx_14 = *i_5
                void* i_7 = i_2 - 4
                *i_5 = *(i_2 - 4)
                i_2 = i_7
                *i_7 = ecx_14
        else
            if (i_1 == arg3)
                break
            
            if (i_2 != i_1)
                int32_t ecx_11 = *i_5
                *i_5 = *i_2
                *i_2 = ecx_11
            
            int32_t edx_8 = *i_5
            i_2 += 4
            void* i_3 = i_1
            *i_5 = *i_3
            i_5 = &i_5[1]
            i_1 += 4
            *i_3 = edx_8
    
    *arg1 = i_5
    arg1[1] = i_2
    return arg1
}
