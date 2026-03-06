// 函数名称: sub_471be0
// 虚拟地址: 0x471be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_471be0(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* eax
    void* eax
    void* edx
    eax, edx = sub_46b2b0(arg3)
    int32_t result = *(eax + 0x1c) - 1
    int32_t var_30
    int32_t var_2c
    int32_t* var_28
    int32_t var_24
    int128_t* entry_ebx
    
    switch (result)
        case 0
            int32_t* var_18_2 = arg1
            return sub_46a900(arg3, edx)
        case 1
            return sub_46aab0(result, arg3, entry_ebx, arg1)
        case 2, 4
            return sub_46a670(result, arg1, arg3, entry_ebx)
        case 3
            return result
        case 5, 9
            return sub_46ad90(result, arg1, arg3, entry_ebx)
        case 6, 0xa, 0x1b, 0x1d
            return sub_46b770(result, arg3, arg1, entry_ebx)
        case 7
            int128_t* var_18_4 = entry_ebx
            sub_46cb90(arg1, arg3, edx)
            return 0
        case 8
            return sub_471b60(arg1, edx, arg3, entry_ebx)
        case 0xb
            return sub_46c680(result, arg3, arg1, entry_ebx)
        case 0xc
            return sub_46c550(result, arg3, entry_ebx, arg1)
        case 0xd
            int128_t* var_18_15 = entry_ebx
            sub_46c300(arg3, arg1, edx)
            return 0
        case 0xe
            return sub_4718f0(result, arg1, arg3, entry_ebx)
        case 0xf
            return sub_46d020(result, edx, arg3, arg1, entry_ebx)
        case 0x11
            int32_t var_18_11 = 1
            int32_t var_1c_2 = 0
            int32_t var_20_1 = 0
            var_24 = 0
            var_28 = nullptr
            var_2c = arg1[0x1f]
            var_30 = 0x11
            goto label_471cbb
        case 0x12
            int32_t var_18_12 = 1
            int32_t var_1c_3 = 0
            int32_t var_20_2 = 0
            var_24 = 0
            var_28 = nullptr
            var_2c = arg1[0x1f]
            var_30 = 0x12
            goto label_471cbb
        case 0x13
            return sub_46d340(result, arg1, arg3, entry_ebx)
        case 0x14
            sub_46ce60(arg1, edx, arg3, entry_ebx)
            return 0
        case 0x15
            int32_t var_18_20 = 1
            int32_t var_1c_4 = 0
            int32_t var_20_3 = 0
            var_24 = 1
            int32_t var_8
            var_28 = &var_8
            var_2c = 0
            var_8 = arg1[0x1f]
            var_30 = 0x13
            goto label_471cbb
        case 0x16
            return sub_46cc00(result, arg1, arg3, entry_ebx)
        case 0x18
            int32_t var_18_10 = 1
            int32_t var_1c_1 = 0
            int32_t var_20 = 0
            var_24 = 0
            var_28 = nullptr
            var_2c = 1
            var_30 = 0x17
        label_471cbb:
            sub_469e10(entry_ebx, arg3, var_30, var_2c, var_28, var_24, 0, 0)
            sub_469ff0(arg3)
            return 0
        case 0x19
            return sub_4474b0(arg1)
        case 0x1a
            return sub_46c960(result, arg1, arg3, entry_ebx)
        case 0x1c
            sub_46dd50(arg3, entry_ebx, arg1)
            return 0
        case 0x1e
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x12e7, "RFTGHandleCard")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x12eb, "RFTGHandleCard")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
