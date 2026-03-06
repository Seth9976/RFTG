// 函数名称: sub_4e5970
// 虚拟地址: 0x4e5970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e5970()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69792e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*data_3078804 + 0x94))(eax_2)
    void* eax_4 = data_27e7fe4
    *(eax_4 + 0x244) = 0
    *(eax_4 + 0xe8) = 1
    *(eax_4 + 0xec) = 1
    sub_4e58a0(1)
    void* eax_5 = data_27e7fcc
    
    if (eax_5 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float var_54
    float var_34
    float var_24
    
    if ((*(eax_5 + 0x3c) & 0x200) != 0)
        (*(*data_3078804 + 0x8c))(0xff000000)
        
        if ((data_31664b8 & 1) == 0)
            data_31664b8.d |= 1
            int32_t var_8_1 = 0
            data_31664b4 = sub_509140(5, "sys/sprite_opaque.material")
            int32_t var_8_2 = 0xffffffff
        
        int32_t eax_10 = data_30785cc
        
        if (eax_10 != 3 && eax_10 == 5)
            long double x87_r7_1 = float.t(0)
            float var_3c_1 = fconvert.s(x87_r7_1)
            float var_38_1 = fconvert.s(x87_r7_1)
            long double x87_r6_1 = float.t(1)
            var_34 = fconvert.s(x87_r6_1)
            var_24 = var_3c_1
            float var_20_1 = var_38_1
            float var_1c_1 = var_34
            float var_18_1 = fconvert.s(x87_r6_1)
            long double x87_r7_3
            
            if (data_3078808 != 1)
                x87_r7_3 = x87_r6_1
            else
                float var_30_2 = fconvert.s(x87_r7_1)
                var_24 = fconvert.s(x87_r7_1)
                x87_r7_3 = x87_r7_1
                float var_38_2 = fconvert.s(x87_r6_1)
                var_34 = fconvert.s(x87_r6_1)
                float var_20_2 = var_38_2
                float var_1c_2 = var_34
                float var_18_2 = var_30_2
            
            int32_t* eax_14 = *((data_26a4524 << 2) + &data_26a450c)
            
            if (eax_14 != 0)
                void* ecx_5 = data_27e7fd0
                float var_3c_3 = fconvert.s(x87_r7_3)
                float var_50_1 = fconvert.s(x87_r7_3)
                var_34 = fconvert.s(float.t(*(ecx_5 + 0x14)) * fconvert.t(0.5))
                long double x87_r7_6 = float.t(*(ecx_5 + 0x18))
                var_54 = var_3c_3
                float var_4c_1 = var_34
                float var_30_3 = fconvert.s(x87_r7_6)
                float var_48_1 = var_30_3
                sub_4d9aa0(&var_24, var_30_3, &var_54, eax_14, &data_be4aac, data_31664b4)
                x87_r7_3 = float.t(0)
            
            int32_t* eax_16 = *((data_26a4524 << 2) + &data_26a4510)
            
            if (eax_16 != 0)
                void* ecx_10 = data_27e7fd0
                long double x87_r6_5 = fconvert.t(fconvert.s(float.t(*(ecx_10 + 0x14))))
                float var_3c_4 = fconvert.s(fconvert.t(0.5) * x87_r6_5)
                float var_50_2 = fconvert.s(x87_r7_3)
                var_34 = fconvert.s(x87_r6_5)
                long double x87_r7_8 = float.t(*(ecx_10 + 0x18))
                var_54 = var_3c_4
                float var_4c_2 = var_34
                float var_30_4 = fconvert.s(x87_r7_8)
                float var_48_3 = var_30_4
                sub_4d9aa0(&var_24, var_30_4, &var_54, eax_16, &data_be4aac, data_31664b4)
    else if (data_27e7bc1 == 0 || data_26a4568 == 0 || data_26a45a4 == 0)
        void* eax_25 = data_27e7fd0
        
        if (*(eax_25 + 0x29) == 0)
            if (*(eax_25 + 0x27) != 0)
                int32_t edi_2 = data_27e7fe4
                __builtin_memcpy(edi_2, edi_2 + 0x30, 0x30)
            
            (*(*data_3078804 + 0x8c))(data_27e8020)
            sub_4ddd00()
            sub_4e1a70(2)
            sub_4e5750()
        else
            sub_54b920(1)
            int32_t* ecx_24 = data_27e7fd0
            data_30785ac = 2
            (*(*ecx_24 + 0x30))()
            sub_4e5750()
    else
        (*(*data_3078804 + 0x8c))(data_27e8020)
        long double x87_r6_7 = fconvert.t(data_26a4544)
        long double x87_r5_4 = fconvert.t(0.5)
        var_24 = fconvert.s(x87_r6_7 + (fconvert.t(data_26a4554) - x87_r6_7) * x87_r5_4)
        long double x87_r5_6 = fconvert.t(data_26a454c)
        long double x87_r5_9 = fconvert.t(data_26a4548)
        float var_20_3 = fconvert.s(x87_r5_9 + (fconvert.t(data_26a4558) - x87_r5_9) * x87_r5_4)
        long double x87_r5_12 = fconvert.t(data_26a4550)
        float var_4c_3 = fconvert.s((
            fconvert.t(fconvert.s(x87_r5_6 + (fconvert.t(data_26a455c) - x87_r5_6) * x87_r5_4))
            + fconvert.t(var_24)) * x87_r5_4)
        long double x87_r6_24 =
            fconvert.t(fconvert.s(x87_r5_12 + (fconvert.t(data_26a4560) - x87_r5_12) * x87_r5_4))
        var_34 = var_4c_3
        float var_48_4 = fconvert.s(x87_r5_4 * (x87_r6_24 + fconvert.t(var_20_3)))
        float var_68_4 = var_48_4
        float var_30_5 = var_48_4
        sub_40af00(&var_54, &var_24, &var_34, fconvert.s(fconvert.t(0.800000012f)))
        float esi_1 = var_54
        var_24 = esi_1
        long double x87_r6_26 = fconvert.t(0.5)
        float var_4c_4 = fconvert.s((fconvert.t(var_4c_3) + fconvert.t(var_24)) * x87_r6_26)
        var_34 = var_4c_4
        float var_50
        float var_48_5 = fconvert.s(x87_r6_26 * (fconvert.t(var_48_4) + fconvert.t(var_50)))
        float var_30_6 = var_48_5
        sub_40af00(&var_54, &var_24, &var_34, fconvert.s(fconvert.t(0.600000024f)))
        float var_20_5 = fconvert.s(fconvert.t(var_50))
        float var_18_5 = fconvert.s(fconvert.t(var_48_5))
        float var_3c_5 = var_54
        long double x87_r7_23 = fconvert.t(data_27e7ff0)
        var_34 = var_4c_4
        var_34 = fconvert.s(x87_r7_23)
        float var_28_1 = var_20_5
        float var_30_8 = fconvert.s(fconvert.t(data_27e7ff4))
        float eax_24 = var_34
        float var_20_6 = var_18_5
        float var_2c = esi_1
        var_24 = var_4c_3
        float var_1c_5 = eax_24
        float var_18_6 = var_30_8
        sub_4ddbe0(&var_2c)
        sub_4e1a70(2)
        sub_4e5750()
    sub_54b920(0)
    (*(*data_3078804 + 0x98))()
    (*(*data_3078804 + 0x9c))(1)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}
