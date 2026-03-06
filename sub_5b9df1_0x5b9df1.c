// 函数名称: sub_5b9df1
// 虚拟地址: 0x5b9df1
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b9df1(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    
    if ((arg2[3].b & 0x40) != 0)
    label_5b9e77:
        
        if (arg1 != 0xffffffff)
            char eax_7 = (arg2[3]).b
            
            if ((eax_7 & 1) != 0)
            label_5b9e8e:
                
                if (arg2[2] == 0)
                    sub_5b8ca8(arg2)
                
                int32_t eax_8 = *arg2
                
                if (eax_8 != arg2[2])
                    goto label_5b9ea7
                
                if (arg2[1] == 0)
                    *arg2 = eax_8 + 1
                label_5b9ea7:
                    *arg2 -= 1
                    char* eax_10 = *arg2
                    
                    if ((arg2[3].b & 0x40) == 0)
                        *eax_10 = arg1.b
                    label_5b9ebc:
                        int32_t eax_12 = arg2[3]
                        arg2[1] += 1
                        arg2[3] = (eax_12 & 0xffffffef) | 1
                        return zx.d(arg1.b)
                    
                    if (*eax_10 == arg1.b)
                        goto label_5b9ebc
                    
                    *arg2 = &eax_10[1]
            else if (eax_7 s< 0 && (eax_7 & 2) == 0)
                goto label_5b9e8e
    else
        int32_t eax_1 = __fileno(arg2)
        void* ecx_5
        
        if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
            ecx_5 = &data_8b8ea8
        else
            ecx_5 = ((eax_1 & 0x1f) << 6) + (&data_3166ee0)[eax_1 s>> 5]
        
        void* eax_4
        
        if ((*(ecx_5 + 0x24) & 0x7f) == 0)
            if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
                eax_4 = &data_8b8ea8
            else
                eax_4 = ((eax_1 & 0x1f) << 6) + (&data_3166ee0)[eax_1 s>> 5]
        
        if ((*(ecx_5 + 0x24) & 0x7f) == 0 && (*(eax_4 + 0x24) & 0x80) == 0)
            goto label_5b9e77
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return 0xffffffff
}
