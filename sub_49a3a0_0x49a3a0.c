// 函数名称: sub_49a3a0
// 虚拟地址: 0x49a3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49a3a0(int32_t arg1, int32_t* arg2, int32_t arg3, int128_t* arg4, char* arg5, int32_t* arg6, int32_t* arg7, int32_t* arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    
    if (arg1 u> 0x18)
        char const* const var_1c_17 = "Unknown choice type!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    switch (arg1)
        case 0
            sub_493ee0(arg5, arg3)
            return 0
        case 1
            sub_49a220(2, arg4, arg2)
            sub_49a220(1, arg4, arg8)
            return 0
        case 2
            if (*arg2 s>= arg3)
                sub_49a220(arg3, arg4, arg2)
                return 0
            
            sub_4c5870("*nl >= arg1", &data_83f3d3, "..\code\rftg\ai.cpp", 0x240f, 
                "ai_make_choice_random")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 3, 0x14
            sub_49a220(1, arg4, arg2)
            return 0
        case 4, 0x15
            sub_49a280(arg4, arg2)
            return 0
        case 5
            return sub_49a1b0(arg1, arg4, *arg2, arg6)
        case 6
            sub_496eb0(arg5, arg4, arg5, arg3, arg2, arg7, arg9, arg10)
            return 0
        case 7, 0xc
            sub_49a220(1, arg4, arg2)
            return 0
        case 8
            int32_t eax_16
            int80_t st0_1
            st0_1, eax_16 = sub_497250(arg6, arg4, arg2, arg8)
            return eax_16
        case 9
            sub_4979b0(arg9, arg10, arg4, arg7, arg5, arg3, arg10, arg6, arg2, arg8)
            return 0
        case 0xa
            sub_497ab0(arg5, arg4, arg7)
            return 0
        case 0xb
            sub_497c00(arg6, arg6, arg7, arg8)
            return 0
        case 0xd, 0x13
            sub_49a220(1, arg4, arg2)
            return 0
        case 0xe
            int32_t eax_26 = *arg2
            
            if (arg10 s< eax_26)
                eax_26 = arg10
            
            sub_49a2f0(eax_26, arg2, 0, arg4, arg6, arg2)
            return 0
        case 0xf
            sub_49a2f0(arg9, arg4, arg3, arg4, arg6, arg2)
            return 0
        case 0x10
            return sub_4c96e0(7, 1)
        case 0x11, 0x12
            return sub_49a150(arg1, arg2, arg4, *arg2, arg6)
        case 0x16
            int32_t eax_32
            int80_t st0_4
            st0_4, eax_32 = sub_499e30(arg6, arg5)
            return eax_32
        case 0x17
            return sub_499fb0(arg5, arg5, arg3, arg9)
        case 0x18
            return 5
}
