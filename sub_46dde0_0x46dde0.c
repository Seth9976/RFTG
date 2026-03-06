// 函数名称: sub_46dde0
// 虚拟地址: 0x46dde0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46dde0(int32_t arg1, void* arg2 @ edi)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    int32_t var_28_1
    int32_t var_24_1
    
    switch (*(eax + 0x1c) - 6)
        case 0, 4
            sub_46dd20(arg2, arg1)
        label_46df01:
            *(eax + 0x1c) = 0
            *(eax + 0x1a08) = 0
            *(eax + 0x1a0c) = 0
            *(eax + 0x1f30) = 0
            *(eax + 0x1f34) = 0
            *(eax + 0x550) = 0
            *(eax + 0xa94) = 0
            return 0
        case 1, 5
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x8b1, "RFTGHandleCancel")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 2
            int32_t var_10_1 = 1
            __builtin_memset(&var_24_1, 0, 0x14)
            var_28_1 = 4
        label_46deef:
            sub_469e10(arg2, arg1, var_28_1, var_24_1, 0, 0, 0, 0)
            sub_469ff0(arg1)
            goto label_46df01
        case 6
            int32_t var_10_3 = 1
            __builtin_memset(&var_24_1, 0, 0x14)
            var_28_1 = 7
            goto label_46deef
        case 7
            int32_t var_10_2 = 1
            __builtin_memset(&var_24_1, 0, 0x14)
            var_28_1 = 0xb
            goto label_46deef
        case 9
            int32_t var_10_8 = 1
            int32_t var_14_3 = 0
            int32_t var_18_2 = 0
            int32_t var_1c_2 = 0
            int32_t var_20_2 = 0
            var_24_1 = 0xffffffff
            var_28_1 = 0xd
            goto label_46deef
        case 0xa
            int32_t var_10_10 = 1
            int32_t var_14_5 = 0
            int32_t var_18_4 = 0
            int32_t var_1c_4 = 0
            int32_t var_20_4 = 0
            var_24_1 = 0xffffffff
            var_28_1 = 0xf
            goto label_46deef
        case 0xc
            int32_t var_10_5 = 1
            int32_t var_14_1 = 0
            int32_t var_18_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_20_1 = 0
            var_24_1 = 0xffffffff
            var_28_1 = 0x11
            goto label_46deef
        case 0x11
            int32_t var_10_9 = 1
            int32_t var_14_4 = 0
            int32_t var_18_3 = 0
            int32_t var_1c_3 = 0
            int32_t var_20_3 = 0
            var_24_1 = 0xffffffff
            var_28_1 = 0x15
            goto label_46deef
        case 0x13
            int32_t var_10_4 = 1
            __builtin_memset(&var_24_1, 0, 0x14)
            var_28_1 = 0x17
            goto label_46deef
        case 0x15
            sub_46c7f0(arg2, arg1)
            goto label_46df01
        case 0x17
            int32_t var_10_6 = 1
            __builtin_memset(&var_24_1, 0, 0x14)
            var_28_1 = 0xa
            goto label_46deef
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x8bd, "RFTGHandleCancel")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
