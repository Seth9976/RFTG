// 函数名称: sub_46dfb0
// 虚拟地址: 0x46dfb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46dfb0(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* eax
    void* edx
    eax, edx = sub_46b2b0(arg1)
    int32_t ecx = *(eax + 0x1c)
    
    if (ecx - 2 u<= 0x1d)
        uint32_t eax_2 = zx.d(*(ecx + &jump_table_46e100[0xb]:2))
        
        switch (eax_2)
            case 0
                sub_46a0b0(eax_2, edx, arg1, arg3)
                goto label_46e092
            case 1
                sub_46c1d0(eax_2, edx, arg1, arg3)
                goto label_46e092
            case 2
                void* var_18_4 = arg3
                sub_46d770(arg1, edx)
                goto label_46e092
            case 3
                sub_46dd20(arg3, arg1)
                goto label_46e092
            case 4
                sub_46c040(arg3, arg1)
                goto label_46e092
            case 5
                goto label_46e092
            case 6
                sub_46cf50(arg1, arg3)
                goto label_46e092
            case 7
                sub_46d260(arg1)
                goto label_46e092
            case 8
                int32_t var_18_1 = 1
                sub_469e10(arg3, arg1, 0x16, *(sub_46b2b0(arg1) + 0x1f8c), 0, 0, 0, 0)
                sub_469ff0(arg1)
            label_46e092:
                *(eax + 0x1c) = 0
                *(eax + 0x1a08) = 0
                *(eax + 0x1a0c) = 0
                *(eax + 0x1f30) = 0
                *(eax + 0x1f34) = 0
                *(eax + 0x550) = 0
                *(eax + 0xa94) = 0
                return 0
            case 9
                void* eax_5 = sub_46b2b0(arg1)
                sub_46db50(arg1, *(eax_5 + 0x1f88), *(eax_5 + 0x55c), *(eax_5 + 0x1f84))
                *(eax_5 + 8) = 0
                goto label_46e092
            case 0xa
                sub_46c7f0(arg3, arg1)
                goto label_46e092
    
    int32_t var_18_8 = ecx
    sub_4c57f0("unhandled confirm %d")
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x907, "RFTGHandleConfirm")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
