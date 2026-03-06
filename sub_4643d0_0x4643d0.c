// 函数名称: sub_4643d0
// 虚拟地址: 0x4643d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**sub_4643d0(int32_t** arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t eax_3
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q((arg3 - arg2) s>> 2)
    int32_t eax_5 = (eax_3 - edx) s>> 1
    int32_t* esi = &arg2[eax_5]
    sub_464ab0(eax_5, edx, arg2, esi, arg3 - 4)
    int32_t* eax_6 = esi
    void* i_2 = &esi[1]
    
    if (arg2 u< esi)
        do
            int32_t ecx_3 = eax_6[-1]
            int32_t edx_1 = *eax_6
            
            if (edx_1 s> ecx_3)
                break
            
            if (edx_1 s< ecx_3)
                break
            
            eax_6 = &eax_6[-1]
        while (arg2 u< eax_6)
    
    if (i_2 u< arg3)
        int32_t edx_2 = *eax_6
        
        do
            int32_t ecx_4 = *i_2
            
            if (edx_2 s> ecx_4)
                break
            
            if (edx_2 s< ecx_4)
                break
            
            i_2 += 4
        while (i_2 u< arg3)
    
    void* i = i_2
    int32_t* edx_3 = eax_6
    
    while (true)
        for (; i u< arg3; i += 4)
            int32_t esi_2 = *i
            int32_t ebx_1 = *eax_6
            
            if (esi_2 s<= ebx_1)
                if (esi_2 s< ebx_1)
                    break
                
                int32_t ebx_2 = *i_2
                *i_2 = *i
                i_2 += 4
                *i = ebx_2
        
        bool cond:2_1 = edx_3 != arg2
        
        if (edx_3 u> arg2)
            do
                int32_t esi_5 = edx_3[-1]
                int32_t ebx_4 = *eax_6
                
                if (ebx_4 s<= esi_5)
                    if (ebx_4 s< esi_5)
                        break
                    
                    int32_t esi_6 = eax_6[-1]
                    eax_6 -= 4
                    *eax_6 = edx_3[-1]
                    edx_3[-1] = esi_6
                
                edx_3 = &edx_3[-1]
            while (arg2 u< edx_3)
            
            cond:2_1 = edx_3 != arg2
        
        if (cond:2_1)
            edx_3 -= 4
            
            if (i != arg3)
                int32_t esi_12 = *i
                *i = *edx_3
                *edx_3 = esi_12
                i += 4
            else
                eax_6 -= 4
                
                if (edx_3 != eax_6)
                    int32_t esi_10 = *edx_3
                    *edx_3 = *eax_6
                    *eax_6 = esi_10
                
                int32_t ebx_11 = *(i_2 - 4)
                int32_t esi_11 = *eax_6
                i_2 -= 4
                *eax_6 = ebx_11
                *i_2 = esi_11
        else
            if (i == arg3)
                break
            
            if (i_2 != i)
                int32_t esi_7 = *eax_6
                *eax_6 = *i_2
                *i_2 = esi_7
            
            int32_t ebx_7 = *eax_6
            *eax_6 = *i
            void* i_1 = i
            i_2 += 4
            eax_6 = &eax_6[1]
            i += 4
            *i_1 = ebx_7
    
    arg1[1] = i_2
    *arg1 = eax_6
    return arg1
}
