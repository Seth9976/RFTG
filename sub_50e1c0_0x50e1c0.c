// 函数名称: sub_50e1c0
// 虚拟地址: 0x50e1c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_50e1c0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MAEHH@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_d4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = arg1[0xe]
    
    if (eax_3 != 0)
        void var_c4
        int32_t eax_5
        int16_t x87control_1
        eax_5, x87control_1 = sub_50c2d0(&var_c4, arg2, arg1, &var_c4, arg2)
        float var_38 = fconvert.s(float.t(1))
        float var_64
        __builtin_memcpy(&var_64, eax_5, 0x28)
        float ecx = var_64
        int32_t var_60
        int32_t edx = var_60
        float var_5c
        float eax_6 = var_5c
        int32_t var_58
        int32_t var_34_1 = var_58
        float var_4c[0x4]
        float ecx_2 = var_4c[0]
        int32_t var_54
        int32_t var_30_1 = var_54
        float var_50
        float var_2c = var_50
        sub_405f60(&var_5c, arg2 + 0x3c)
        __builtin_memcpy(&var_38, &var_5c, 0x20)
        float eax_8 = arg1[0x13]
        float ecx_3 = arg1[0x14]
        float var_84 = arg1[0x12]
        float edx_3 = arg1[0x15]
        long double x87_r7_2 = fconvert.t(var_84)
        float var_7c = ecx_3
        char eax_9
        int16_t x87control_2
        eax_9, x87control_2 = sub_4e3930(x87control_1, fconvert.s(x87_r7_2))
        char eax_10
        int16_t x87control_3
        eax_10, x87control_3 = sub_4e3930(x87control_2, fconvert.s(fconvert.t(eax_8)))
        char var_67_1 = eax_10
        char eax_11
        int16_t x87control_4
        eax_11, x87control_4 = sub_4e3930(x87control_3, fconvert.s(fconvert.t(var_7c)))
        char var_66_1 = eax_11
        char var_65_1 = sub_4e3930(x87control_4, fconvert.s(fconvert.t(edx_3)))
        sub_4dad50()
        
        if ((data_316597c & 1) == 0)
            data_316597c.d |= 1
            int32_t var_8_1 = 0
            data_3165978 = sub_509140(5, "sys/sprite_3d_no_zread.material")
            int32_t var_8_2 = 0xffffffff
        
        *(data_27e7fe4 + 0x254) = data_3165978
        void* esi_4
        
        if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
            esi_4 = &arg1[2]
        else
            esi_4 = arg2 + 0x484
        
        void var_3c
        __builtin_memcpy(&var_3c, esi_4, 0x24)
        float var_94
        int32_t* eax_17 = sub_50c1b0(&var_94, arg1)
        float eax_18 = eax_17[2]
        long double x87_r7_7 = fconvert.t(ecx) * fconvert.t(*eax_17)
        float var_70 = eax_17[1]
        var_94 = fconvert.s(x87_r7_7)
        float var_8c = fconvert.s(fconvert.t(eax_6) * fconvert.t(eax_18))
        var_70 = fconvert.s(fconvert.t(var_94))
        long double x87_r7_11 = fconvert.t(var_8c)
        var_8c = var_70
        float var_88_1 = fconvert.s(x87_r7_11)
        sub_405e30(&var_2c, &var_8c, &data_840a00)
        var_84 = var_2c
        float var_80_2 = ecx_2
        var_70 = eax_9.d
        void* eax_21 = data_27e7fe0
        var_7c = ecx
        var_67_1.w = 0
        char var_65_2 = 0
        int32_t var_78_2 = edx
        int32_t var_6c_3 = 0.d
        
        if (*(eax_21 + 0x38) == 0)
            sub_4d9830(eax_21, &var_70, eax_3, &data_84076c, &var_84, nullptr)
        else
            float eax_23 = sub_4d9650(&var_84, eax_21 + 0x28, &data_84076c, &var_94, &var_84)
            
            if (eax_23.b != 0)
                sub_4d9830(eax_23, &var_70, eax_3, &var_94, &var_4c, nullptr)
        
        void* eax_24 = data_27e7fe4
        *(eax_24 + 0x254) = 0
        __builtin_memcpy(eax_24 + 0x9c, 0x83faf8, 0x40)
        *(eax_24 + 0xdc) = 0
        sub_4e2080()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}
