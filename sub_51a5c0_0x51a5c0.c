// 函数名称: sub_51a5c0
// 虚拟地址: 0x51a5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_51a5c0(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx = data_30785e8
    int32_t ecx = data_30785e8
    
    if (ecx s< 0x40)
        data_30785e8 = ecx + 1
        *(ecx * 0xc + &data_26a6218) = arg3
        int32_t edx = arg2[1]
        (&data_26a621c)[ecx * 3] = *arg2
        (&data_26a6220)[ecx * 3] = edx
        return ecx * 0xc + &data_26a6218
    
    sub_4c5870("numTouches < MAX_TOUCHES", &data_83f3d3, "Windows\WindowsApp.cpp", 0x233, 
        "InputAddTouchDown")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
