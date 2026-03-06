// 函数名称: sub_495b00
// 虚拟地址: 0x495b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_495b00(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: double var_28 = fconvert.d(fconvert.t(-1.0))
    double var_28 = fconvert.d(fconvert.t(-1.0))
    int32_t edx = 0xffffffff
    int32_t esi = 0
    int32_t i = 0
    int32_t var_10 = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t* entry_ebx
    
    if (*arg5 s> 0)
        do
            data_26031d0 = 0
            data_2603c28 = 0
            data_2604680 = 0
            data_26050d8 = 0
            data_2605b30 = 0
            data_2606588 = 0
            data_2606fe0 = 0
            data_2607a38 = 0
            data_2608490 = 0
            data_2608ee8 = 0
            sub_5abfc0(&data_2609940, 0, 0x40000)
            double var_20 = fconvert.d(fconvert.t(-1.0))
            int32_t edx_1 = arg4[i]
            int32_t eax_1 = *entry_ebx
            data_27e7a98 = 0
            int32_t var_14
            sub_495880(0, arg1, arg2, arg3, eax_1, eax_1 - 4, 0, &var_14, &var_20, edx_1)
            long double x87_r7_2 = fconvert.t(var_28)
            long double x87_r6_1 = fconvert.t(var_20)
            x87_r6_1 - x87_r7_2
            
            if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
                var_28 = fconvert.d(x87_r7_2)
                var_10 = arg4[i]
                var_c = var_14
            
            i += 1
        while (i s< *arg5)
        
        edx = var_c
    
    *arg4 = var_10
    *arg5 = 1
    *entry_ebx = 0
    
    if (edx s< 1)
        return 
    
    int32_t eax_7 = 1
    
    do
        if ((edx & eax_7) != 0)
            *(arg3 + (*entry_ebx << 2)) = *(arg3 + (esi << 2))
            *entry_ebx += 1
        
        esi += 1
        eax_7 = 1 << esi.b
    while (eax_7 s<= edx)
}
