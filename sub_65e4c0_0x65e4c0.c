// 函数名称: sub_65e4c0
// 虚拟地址: 0x65e4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65e4c0(int32_t* arg1 @ esi, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi = arg3
    int32_t edi = arg3
    
    if (arg4 s>= 0 && (arg4 s> 0 || edi != 0))
        int32_t temp3_1 = edi
        edi += arg1[2]
        arg4 = adc.d(arg4, arg1[3], temp3_1 + arg1[2] u< temp3_1)
        arg3 = edi
    
    while (true)
        if (arg4 s>= 0 && (arg4 s> 0 || edi != 0))
            int32_t temp6_1 = arg1[3]
            
            if (temp6_1 s> arg4)
                break
            
            if (temp6_1 s>= arg4 && arg1[2] u>= edi)
                break
        
        void* eax_2 = sub_645df0(&arg1[6], arg2)
        
        if (eax_2 s>= 0)
            if (eax_2 != 0)
                int32_t result = arg1[2]
                int32_t edi_3 = arg1[3]
                int32_t eax_11
                int32_t edx_6
                edx_6:eax_11 = sx.q(eax_2)
                arg1[3] = adc.d(edx_6, edi_3, eax_11 + result u< eax_11)
                arg4 = edi_3
                arg1[2] = eax_11 + result
                return result
            
            if ((edi | arg4) == 0)
                break
            
            *__errno() = 0
            
            if (arg1[0xb0] == 0)
                return 0xffffff80
            
            if (*arg1 == 0)
                return 0xfffffffe
            
            int32_t eax_7 = arg1[0xb0](sub_645d30(&arg1[6], 0x800), 1, 0x800, *arg1)
            bool cond:5_1 = eax_7 == 0
            
            if (eax_7 s> 0)
                sub_645dc0(&arg1[6], eax_7)
                cond:5_1 = eax_7 == 0
            
            if (cond:5_1)
                if (*__errno() != 0)
                    return 0xffffff80
                
                return 0xfffffffe
            
            if (eax_7 s< 0)
                return 0xffffff80
            
            edi = arg3
        else
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(eax_2)
            int32_t temp5_1 = arg1[2]
            arg1[2] -= eax_3
            arg1[3] = sbb.d(arg1[3], edx_1, temp5_1 u< eax_3)
    
    return 0xffffffff
}
