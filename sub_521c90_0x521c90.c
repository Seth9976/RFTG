// 函数名称: sub_521c90
// 虚拟地址: 0x521c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_521c90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e981
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = arg2
    arg2 = nullptr
    char* const var_24 = &data_83f3d3
    int32_t var_8_1 = 1
    int32_t ecx = *eax_3
    
    switch (ecx)
        case 0
            sub_521b10(arg1, &eax_3[1])
        label_521cf2:
            arg2 = 1
            var_8_1.b = 0
            void var_28
            sub_521920(&var_28)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        case 1
            int32_t edx
            sub_521bb0(arg1, edx, eax_3[1])
            goto label_521cf2
        case 2
            int32_t var_40_2 = ecx
            sub_521bd0(arg1, fconvert.s(fconvert.t(eax_3[1])))
            goto label_521cf2
        case 4
            sub_5219d0(arg1, 0xbe1ea8)
            goto label_521cf2
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x3bd, "UI2ExprToEvalResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
