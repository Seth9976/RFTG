// 函数名称: sub_5cb050
// 虚拟地址: 0x5cb050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb050(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_5c9500(arg1)
    void* eax = sub_5c9500(arg1)
    
    if (arg2 != 0)
        int32_t* eax_1 = *(eax + 0x38)
        
        if (eax_1 != 0 && eax_1 != arg1)
            sub_5c9da0(eax_1)
    
    int32_t result
    result.b = *(eax + 0x38) == arg1
    
    if (result == arg2)
        return result
    
    for (int32_t* i = *(data_bed820 + 0xf0); i != 0; i = i[0x1f])
        if (i != arg1)
            char eax_2 = (i[0xc]).b
            
            if ((eax_2 & 1) != 0 && (eax_2 & 4) != 0 && (eax_2 & 0x40) == 0 && sub_5c9500(i) == eax)
                goto label_5cb0cf
        else if (arg2 != 0)
        label_5cb0cf:
            void var_18
            
            if (sub_5c9530(i, &var_18) == 0)
                int32_t ebx_1 = 1
                int32_t var_14
                int32_t var_10
                
                if (i[6] == var_14 && i[7] == var_10)
                    ebx_1 = 0
                
                int32_t* eax_9
                
                if ((arg1[0xc] & 0x1001) == 0x1001)
                    eax_9 = nullptr
                else
                    eax_9 = &var_18
                
                sub_5c9220(eax_9, eax)
                void* ecx_4 = data_bed820
                int32_t eax_10 = *(ecx_4 + 0x54)
                
                if (eax_10 != 0)
                    eax_10(ecx_4, i, eax, 1)
                
                *(eax + 0x38) = i
                
                if (ebx_1 == 0)
                    sub_5ca090(i)
                    return sub_5c96b0(i)
                
                sub_5d6e90(i, 5, var_14, var_10)
                return sub_5c96b0(i)
    
    sub_5c9220(nullptr, eax)
    void* ecx_2 = data_bed820
    int32_t eax_5 = *(ecx_2 + 0x54)
    
    if (eax_5 != 0)
        eax_5(ecx_2, arg1, eax, 0)
    
    *(eax + 0x38) = 0
    sub_5ca090(arg1)
    return sub_5c96b0(arg1)
}
