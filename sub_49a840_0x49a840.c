// 函数名称: sub_49a840
// 虚拟地址: 0x49a840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49a840(int32_t* arg1, int32_t arg2, int32_t* arg3, int128_t* arg4 @ esi, char* arg5, int32_t* arg6, int32_t* arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: if (arg2 u> 0x18)
    if (arg2 u> 0x18)
        char const* const var_14_23 = "Unknown choice type!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    switch (arg2)
        case 0
            sub_493ee0(arg5, arg8)
            return 0
        case 1
            sub_495b00(arg4, arg5, arg1, arg6, arg7)
            return 0
        case 2
            sub_494a60(arg4, arg5, arg8.w)
            return 0
        case 3
            sub_494ef0(arg4, arg4, arg3)
            return 0
        case 4
            sub_495000(arg5, arg1)
            return 0
        case 5
            int32_t eax_5
            int80_t st0_3
            st0_3, eax_5 = sub_496560(0, arg1, *arg3, arg8, arg9, arg10)
            return eax_5
        case 6
            sub_496eb0(arg4, arg4, arg5, arg8, arg3, arg6, arg9, arg10)
            return 0
        case 7
            *arg3 = 1
            return 0
        case 8
            int32_t eax_8
            int80_t st0_5
            st0_5, eax_8 = sub_497250(0, arg4, arg3, arg7)
            return eax_8
        case 9
            sub_4979b0(arg9, arg7, arg4, arg6, arg5, arg8, arg10, arg1, arg3, arg7)
            return 0
        case 0xa
            sub_497ab0(arg5, arg4, arg6)
            return 0
        case 0xb
            sub_497c00(0, arg1, arg6, arg7)
            return 0
        case 0xc
            sub_498030(arg4, arg4, arg5, arg8)
            return 0
        case 0xd
            sub_498350(arg5, arg1, arg6, arg8)
            return 0
        case 0xe
            sub_498cb0(arg1, arg1, arg5, arg4, arg8, arg9, arg3)
            return 0
        case 0xf
            int32_t var_14_14 = arg8
            int32_t* var_18_14 = arg3
            int32_t* ecx_16 = arg6[1]
            int32_t edx_28 = *arg6
            sub_499050(arg4, edx_28, ecx_16, arg5, edx_28, ecx_16, arg1)
            return 0
        case 0x10
            int32_t eax_20
            int80_t st0_10
            st0_10, eax_20 = sub_499150(arg4, arg4, arg5)
            return eax_20
        case 0x11
            int32_t eax_21
            int80_t st0_11
            st0_11, eax_21 = sub_499390(arg1, *arg3)
            return eax_21
        case 0x12
            int32_t eax_22
            int80_t st0_12
            st0_12, eax_22 = sub_499630(arg4, arg4, *arg3)
            return eax_22
        case 0x13
            sub_499700(arg1, arg5, arg8, arg9)
            return 0
        case 0x14
            sub_499850(0, arg5, arg1, *arg3)
            return 0
        case 0x15
            sub_499ab0(0, arg5, arg1, arg7, arg8, arg9)
            return 0
        case 0x16
            int32_t eax_26
            int80_t st0_16
            st0_16, eax_26 = sub_499e30(0, arg5)
            return eax_26
        case 0x17
            return sub_499fb0(arg4, arg5, arg8, arg9)
        case 0x18
            return 5
}
