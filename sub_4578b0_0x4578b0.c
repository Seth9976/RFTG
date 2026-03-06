// 函数名称: sub_4578b0
// 虚拟地址: 0x4578b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4578b0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = (arg3 + (arg1 << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
    void* result = (arg3 + (arg1 << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
    int32_t edx = arg2 & 0x7f
    uint8_t ecx_3 = (arg2 u>> 7).b & 1
    
    if (edx u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5cc5, "LogActionChoice")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (edx)
        case 0
            *(result + 1) = 1
            return result
        case 1
            *(result + 0xd) = 1
            *(result + 0xf) = ecx_3
            return result
        case 2
            *(result + 0xe) = 1
            *(result + 0xf) = ecx_3
            return result
        case 3, 4
            *(result + 0x1d) = 1
            *(result + 0x1e) = ecx_3
            return result
        case 5, 6
            *(result + 0x2d) = 1
            *(result + 0x2e) = ecx_3
            return result
        case 7
            *(result + 0x119) = 1
            *(result + 0x11a) = ecx_3
            return result
        case 8
            *(result + 0x125) = 1
            *(result + 0x126) = ecx_3
            return result
        case 9
            *(result + 0x169) = 1
            *(result + 0x16a) = ecx_3
            return result
}
