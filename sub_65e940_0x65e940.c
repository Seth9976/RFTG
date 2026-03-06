// 函数名称: sub_65e940
// 虚拟地址: 0x65e940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65e940(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t* edi = arg2
    int32_t var_c = 0
    
    if (ebx == 0)
        void var_20
        int32_t eax
        int32_t edx_1
        eax, edx_1 = sub_65e4c0(edi, &var_20, 0x10000, arg1)
        
        if (eax == 0xffffff80 && edx_1 == 0xffffffff)
            return eax
        
        if (edx_1 s<= 0 && (edx_1 s< 0 || eax u< 0))
            return 0xffffff7c
        
        ebx = &var_20
    
    sub_6469c0(arg3)
    sub_646590(arg4)
    edi[0x16] = 2
    void var_40
    int32_t edi_4
    
    if (sub_645520(ebx) != 0)
        int32_t i
        
        do
            if (arg5 != 0)
                int32_t ecx_1 = *arg6
                int32_t* edi_1 = *arg5
                uint32_t eax_4 = sub_6455f0(ebx)
                int32_t edx_3 = ecx_1
                int32_t* ecx_2 = edi_1
                
                if (edi_1 == 0 || edx_3 == 0)
                label_65ea01:
                    uint32_t eax_5 = sub_6455f0(ebx)
                    *arg6 += 1
                    int32_t eax_6 = *arg5
                    int32_t eax_7
                    
                    if (eax_6 == 0)
                        eax_7 = sub_5a881a(4)
                    else
                        eax_7 = _realloc(eax_6, *arg6 << 2)
                    
                    *arg5 = eax_7
                    edi = arg2
                    *(*arg5 + (*arg6 << 2) - 4) = eax_5
                    goto label_65ea46
                
                while (true)
                    edx_3 -= 1
                    
                    if (*ecx_2 == eax_4)
                        int32_t eax_16 = *arg5
                        
                        if (eax_16 != 0)
                            __free_base(eax_16)
                        
                        *arg5 = 0
                        *arg6 = 0
                        break
                    
                    ecx_2 = &ecx_2[1]
                    
                    if (edx_3 == 0)
                        goto label_65ea01
                
                goto label_65eb19
            
        label_65ea46:
            
            if (edi[0x16] s< 3)
                sub_6462e0(&edi[0x1e], sub_6455f0(ebx))
                sub_645f20(&edi[0x1e], ebx)
                
                if (sub_646420(&edi[0x1e], &var_40) s> 0 && sub_647040(&var_40) != 0)
                    edi[0x16] = 3
                    
                    if (sub_6470d0(arg3, arg4, &var_40) != 0)
                    label_65eb19:
                        edi_4 = 0xffffff7b
                        goto label_65eb22
            
            int32_t eax_14
            int32_t edx_6
            eax_14, edx_6 = sub_65e4c0(edi, ebx, 0x10000, 0)
            
            if (eax_14 == 0xffffff80 && edx_6 == 0xffffffff)
                edi_4 = 0xffffff80
                goto label_65eb22
            
            if (edx_6 s< 0)
                goto label_65eb4d
            
            if (edx_6 s<= 0 && eax_14 u< 0)
                goto label_65eb4d
            
            if (edi[0x16] == 3)
                uint32_t eax_15 = sub_6455f0(ebx)
                
                if (edi[0x72] == eax_15)
                    sub_645f20(&edi[0x1e], ebx)
                    break
            
            i = sub_645520(ebx)
        while (i != 0)
    
    if (edi[0x16] != 3)
    label_65eb4d:
        edi_4 = 0xffffff7c
    label_65eb22:
        sub_646a00(arg3)
        sub_646920(arg4)
        arg2[0x16] = 2
        return edi_4
    
    int32_t i_1 = 0
    int32_t i_2 = 0
    
    while (i_1 s< 2)
        while (true)
            int32_t eax_20 = sub_646420(&edi[0x1e], &var_40)
            
            if (eax_20 == 0)
                if (i_1 s>= 2)
                    return 0
                
                while (true)
                    int32_t eax_22
                    int32_t edx_11
                    eax_22, edx_11 = sub_65e4c0(edi, ebx, 0x10000, 0)
                    
                    if (edx_11 s< 0)
                        goto label_65eb19
                    
                    if (edx_11 s<= 0 && eax_22 u< 0)
                        goto label_65eb19
                    
                    uint32_t eax_23 = sub_6455f0(ebx)
                    
                    if (edi[0x72] == eax_23)
                        sub_645f20(&edi[0x1e], ebx)
                        i_1 = i_2
                        break
                    
                    if (sub_645520(ebx) != 0)
                        if (var_c != 0)
                            goto label_65eb19
                        
                        var_c = 1
                
                break
            
            if (eax_20 == 0xffffffff)
                goto label_65eb19
            
            edi_4 = sub_6470d0(arg3, arg4, &var_40)
            
            if (edi_4 != 0)
                goto label_65eb22
            
            i_1 += 1
            i_2 = i_1
            
            if (i_1 s>= 2)
                return 0
            
            edi = arg2
    
    return 0
}
