// 函数名称: sub_65e740
// 虚拟地址: 0x65e740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65e740(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t esi = ebx[3]
    int32_t edi = ebx[2]
    int32_t var_1c = edi
    int32_t var_18 = esi
    int32_t var_14 = 0xffffffff
    int32_t var_10 = 0xffffffff
    int32_t var_34_1
    __builtin_memset(&var_34_1, 0xff, 0x18)
    int32_t var_2c_1
    int32_t var_28_1
    int32_t var_24_1
    int32_t var_20_1
    
    do
        int32_t temp0_1 = edi
        edi -= 0x10000
        esi = adc.d(esi, 0xffffffff, temp0_1 u>= 0x10000)
        int32_t var_c_1 = edi
        int32_t var_8_1 = esi
        
        if (esi s<= 0 && (esi s< 0 || edi u< 0))
            var_c_1 = 0
            var_8_1 = 0
            esi = 0
            edi = 0
        
        int32_t ecx_1 = *ebx
        int32_t eax_4
        
        if (ecx_1 == 0)
            eax_4 = 0xffffff7f
        else
            int32_t eax_1 = ebx[0xb1]
            int32_t eax_2
            
            if (eax_1 != 0)
                eax_2 = eax_1(ecx_1, edi, esi, 0)
            
            if (eax_1 == 0 || eax_2 == 0xffffffff)
                eax_4 = 0xffffff80
            else
                ebx[2] = edi
                ebx[3] = esi
                sub_646250(&ebx[6])
                eax_4 = 0
        
        int32_t eax_21
        int32_t edx_1
        edx_1:eax_21 = sx.q(eax_4)
        
        if ((eax_21 | edx_1) != 0)
            return eax_21
        
        int32_t edx_2 = ebx[3]
        
        if (edx_2 s<= var_18 && (edx_2 s< var_18 || ebx[2] u< var_1c))
            while (true)
                void var_44
                int32_t eax_6
                int32_t edx_5
                eax_6, edx_5 =
                    sub_65e4c0(ebx, &var_44, var_1c - ebx[2], sbb.d(var_18, ebx[3], var_1c u< ebx[2]))
                
                if (eax_6 == 0xffffff80 && edx_5 == 0xffffffff)
                    return 0xffffff80
                
                if (edx_5 s< 0)
                    break
                
                if (edx_5 s<= 0 && eax_6 u< 0)
                    break
                
                int32_t eax_8
                int32_t edx_6
                edx_6:eax_8 = sx.q(sub_6455f0(&var_44))
                var_34_1 = eax_8
                int32_t eax_9
                int32_t edx_7
                eax_9, edx_7 = sub_645560(&var_44)
                var_28_1 = edx_7
                int32_t eax_12
                int32_t edx_8
                edx_8:eax_12 = sx.q(*arg4)
                var_2c_1 = eax_9
                var_24_1 = eax_6
                var_20_1 = edx_5
                
                if (var_34_1 == eax_12 && edx_6 == edx_8)
                    *arg5 = eax_9
                    var_14 = eax_6
                    var_10 = edx_5
                    arg5[1] = var_28_1
                
                int32_t* eax_14 = arg2
                
                if (eax_14 == 0 || arg3 == 0)
                label_65e8b2:
                    var_14 = 0xffffffff
                    var_10 = 0xffffffff
                else
                    int32_t ecx_9 = arg3
                    
                    while (true)
                        ecx_9 -= 1
                        
                        if (*eax_14 == var_34_1)
                            break
                        
                        eax_14 = &eax_14[1]
                        
                        if (ecx_9 == 0)
                            goto label_65e8b2
                
                int32_t ecx_10 = arg1[3]
                
                if (ecx_10 s>= var_18 && (ecx_10 s> var_18 || arg1[2] u>= var_1c))
                    ebx = arg1
                    break
                
                ebx = arg1
            
            edi = var_c_1
            esi = var_8_1
    while ((var_24_1 & var_20_1) == 0xffffffff)
    
    if (var_10 s>= 0 && (var_10 s> 0 || var_14 u>= 0))
        return var_14
    
    *arg4 = var_34_1
    arg5[1] = var_28_1
    *arg5 = var_2c_1
    return var_24_1
}
