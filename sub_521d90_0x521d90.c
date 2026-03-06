// 函数名称: sub_521d90
// 虚拟地址: 0x521d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_521d90(void* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 8)
    int32_t ecx = *(arg1 + 8)
    int32_t var_8 = 0
    int32_t edx
    
    switch (ecx)
        case 0
            sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x3c6, "UI2StateToEvalResult")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 1
            sub_521bb0(arg2, edx, *(arg1 + 0x10))
            return arg2
        case 2
            int32_t var_10_1 = ecx
            sub_521bd0(arg2, fconvert.s(fconvert.t(*(arg1 + 0x10))))
            return arg2
        case 3
            sub_521a40(arg2, arg1 + 0xc)
            return arg2
        case 8
            sub_521bf0(arg2, edx, arg1 + 0x10)
            return arg2
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x3d0, "UI2StateToEvalResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
