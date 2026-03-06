// 函数名称: sub_495540
// 虚拟地址: 0x495540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_495540(void* arg1, void* arg2, void* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_1 = ebp
    __chkstk(0x8b8c)
    void* var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    void* eax_2 = arg2
    void* ebx = arg1
    int32_t esi = 0
    arg2 = ebx
    void* var_4 = eax_2
    var_8 = nullptr
    void* edx = &data_26031d4
    void* var_18
    
    while (*(edx - 4) != 0)
        if (*edx == arg3 && *(edx + 4) == arg4 && *(edx + 8) == arg5)
            var_18 = &(&data_26031d0)[esi * 0x296]
            sub_4954b0(eax_2, arg3, ebx, arg3, arg4, var_18)
            sub_5a6aba(eax_1 ^ &var_8)
            return 
        
        edx += 0xa58
        esi += 1
        
        if (edx s>= 0x2609944)
            break
    
    int32_t esi_1 = sx.d(*(ebx + 0x460))
    int32_t edx_1 = 0
    int32_t arg_1eec[0x148]
    
    if (esi_1 s> 0)
        void* ecx_4 = ebx + 0x468
        
        do
            if ((rol.d(1, eax_2.b) & zx.d(*ecx_4)) == 0)
                void* ebx_2 = var_8
                arg_1eec[ebx_2] = edx_1
                var_8 = ebx_2 + 1
            
            edx_1 += 1
            ecx_4 += 0x14
        while (edx_1 s< esi_1)
        
        ebx = arg2
    
    void* edx_3 = arg3 - arg4
    void arg_2944
    void* edi_3 = &arg_2944
    int32_t __saved_edi
    void* edx_6 = &(&__saved_edi)[eax_2 * 0x2d + 0x3a]
    __return_addr = nullptr
    void* arg_18 = edx_6
    arg1 = &arg_2944
    
    while (true)
        var_18 = eax_2
        void arg_24
        sub_48bb40(ebx, &arg_24, edx_6.b)
        void* esi_5 = arg3
        void* const __return_addr_2 = __return_addr
        
        if (esi_5 s> 0)
            arg4 = edi_3 - 0x520
            arg3 = esi_5
            void* i
            
            do
                __return_addr_2 = __return_addr_2 * 0x19660d + 0x3c6ef35f
                int32_t temp1_1 = mods.dp.d(sx.q(__return_addr_2 u>> 0x10 & 0x7fff), var_8)
                int32_t esi_6 = arg_1eec[temp1_1]
                var_18 = var_4
                sub_492910(esi_6, temp1_1, &arg_24, var_18)
                (&var_18)[esi_6 * 5 + 0x129].w |= 0x80
                void* eax_12 = var_8
                void arg_1ee8
                int32_t edx_10 = *(&arg_1ee8 + (eax_12 << 2))
                *arg4 = esi_6
                i = arg3
                arg3 -= 1
                var_8 = eax_12 - 1
                (&var_18)[temp1_1 + 0x7c1] = edx_10
                arg4 += 4
            while (i != 1)
            edi_3 = arg1
            esi_5 = arg3
        
        var_18 = &(&__saved_edi)[eax_2 * 0x2d] + 0xe6
        sub_495240(edi_3, &arg_24, arg4, var_18)
        var_18 = edx_3
        sub_49dbf0(edx_3, edi_3, &arg_24, var_4, var_18)
        *(&(&__saved_edi)[eax_2 * 0x2d] + 0xea) = 0
        *(&(&__saved_edi)[eax_2 * 0x2d] + 0xe6) = 0
        *arg_18 = 0
        long double st0_2
        st0_2, edx_6 = sub_4904a0(&(&__saved_edi)[eax_2 * 0x2d] + 0xe6, arg_18.b, &arg_24, var_4)
        *(edi_3 - 0x528) = fconvert.d(st0_2)
        *(edi_3 - 0x534) = esi_5
        *(edi_3 - 0x530) = arg4
        *(edi_3 - 0x52c) = &(&__saved_edi)[eax_2 * 0x2d] + 0xe6
        
        if (esi_5 s> 0)
            void* eax_18 = var_8
            edx_6 = arg3
            var_8 += edx_6
            __builtin_memcpy(&(&__saved_edi)[eax_18 + 0x7c0], edi_3 - 0x520, esi_5 << 2)
            edi_3 = arg1
        
        void* __return_addr_1 = __return_addr + 1
        edi_3 += 0xa58
        __return_addr = __return_addr_1
        arg1 = edi_3
        
        if (__return_addr_1 s>= 0xa)
            break
        
        eax_2 = var_4
        ebx = arg2
    
    var_18 = sub_492810
    void arg_240c
    sub_5a7ac0(&arg_240c, 0xa, 0xa58, var_18)
    int32_t eax_21 = 0
    int32_t* ecx_20 = &data_26031d0
    
    while (*ecx_20 != 0)
        ecx_20 = &ecx_20[0x296]
        eax_21 += 1
        
        if (ecx_20 s>= &data_2609940)
            var_18 = "Ran out of explore sample result entries!\n"
            sub_4c5680("error %s")
            sub_5a79f4()
            noreturn
    
    void arg_2e64
    __builtin_memcpy(&(&data_26031d0)[eax_21 * 0x296], &arg_2e64, 0xa58)
    var_18 = &(&data_26031d0)[eax_21 * 0x296]
    (&data_26031d0)[eax_21 * 0x296] = 1
    sub_4954b0(var_4, arg3, arg2, arg3, arg4, var_18)
    sub_5a6aba(eax_1 ^ &var_8)
}
