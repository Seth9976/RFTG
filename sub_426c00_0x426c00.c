// 函数名称: sub_426c00
// 虚拟地址: 0x426c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_426c00(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691d6a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_13c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = *(data_27e7a40 + 0x548)
    void* eax_5 = sub_463f60(eax_4 + 0x43960, *(eax_4 + 0xbfd0))
    void* ecx_2 = *(data_27e7a40 + 0x548)
    float var_6c = fconvert.s(fconvert.t(*(ecx_2 + 0xbfdc)) - fconvert.t(*(ecx_2 + 0xbfd4)))
    float var_68 = fconvert.s(fconvert.t(*(ecx_2 + 0xbfe0)) - fconvert.t(*(ecx_2 + 0xbfd8)))
    float var_5c = fconvert.s(fconvert.t(*(eax_5 + 0x20)))
    int32_t eax_6 = data_31656b4
    float var_64 = fconvert.s(fconvert.t(var_5c) + fconvert.t(var_6c))
    long double x87_r7_8 = fconvert.t(fconvert.s(fconvert.t(*(eax_5 + 0x24))))
    var_5c = var_64
    float var_60 = fconvert.s(x87_r7_8 + fconvert.t(var_68))
    float var_58_1 = var_60
    
    if ((eax_6.b & 1) == 0)
        data_31656b4 = eax_6 | 1
        int32_t var_8_1 = 0
        data_31656b0 = sub_4f5220(data_307c530, "img_playerHandDragTarget")
        int32_t var_8_2 = 0xffffffff
        eax_6 = data_31656b4
    
    int32_t ecx_4 = *arg1 - 1
    
    if (ecx_4 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x175d, "OverDragTarget")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void var_54
    int32_t* eax_11
    int32_t result
    int32_t* edx_1
    
    switch (ecx_4)
        case 0
            void var_ac
            int32_t eax_10
            int80_t st0
            st0, eax_10 = sub_40a930(&var_ac)
            eax_11 = data_31656b0
            __builtin_memcpy(&var_54, eax_10, 0x40)
            result = sub_4f6200(eax_11, &var_5c, &var_54, data_307c530, eax_11, &var_5c)
        case 1
            float var_18_1 = fconvert.s(fconvert.t(10000f))
            float var_140_4 = var_60
            float var_144_5 = var_64
            int32_t var_34
            int80_t st0_3
            st0_3, result = sub_426b10(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, arg1[1]), &var_34)
            result.b = var_34 == 0xe
        case 2
            if ((eax_6.b & 2) == 0)
                data_31656b4 = eax_6 | 2
                int32_t var_8_3 = 1
                data_31656ac = sub_4f5220(data_307c72c, "dragTarget")
                int32_t var_8_4 = 0xffffffff
            
            void var_ec
            int32_t eax_14
            int80_t st0_1
            st0_1, eax_14 = sub_40a930(&var_ec)
            edx_1 = data_31656ac
            eax_11 = data_307c72c
            __builtin_memcpy(&var_54, eax_14, 0x40)
            result = sub_4f6200(eax_11, edx_1, &var_54, eax_11, edx_1, &var_5c)
        case 3
            if ((eax_6.b & 4) == 0)
                data_31656b4 = eax_6 | 4
                int32_t var_8_5 = 2
                data_31656a8 = sub_4f5220(data_307c1c8, "bg")
                int32_t var_8_6 = 0xffffffff
            
            void var_12c
            int32_t eax_17
            int80_t st0_2
            st0_2, eax_17 = sub_40a930(&var_12c)
            edx_1 = data_307c1c8
            __builtin_memcpy(&var_54, eax_17, 0x40)
            result = sub_4f6200(&var_5c, edx_1, &var_54, edx_1, data_31656a8, &var_5c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
