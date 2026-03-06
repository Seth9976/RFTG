// 函数名称: sub_5d4ae0
// 虚拟地址: 0x5d4ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d4ae0()
{
    // 第一条实际指令: sub_5dc410(nullptr, 0, 0)
    sub_5dc410(nullptr, 0, 0)
    int32_t var_18 = 0x280
    int32_t var_1c = 1
    void* result = sub_5d0ad0()
    
    if (result != 0)
        int32_t var_c_1 = 0x1524
        int32_t var_10_1 = 1
        void* eax = sub_5d0ad0()
        
        if (eax != 0)
            *(result + 0x274) = eax
            HMODULE eax_2 = sub_5def10("USER32.DLL")
            *(eax + 8) = eax_2
            
            if (eax_2 != 0)
                *(eax + 0xc) = sub_5defa0(eax_2, "CloseTouchInputHandle")
                int32_t eax_5 = sub_5defa0(*(eax + 8), "GetTouchInputInfo")
                HMODULE ecx_1 = *(eax + 8)
                *(eax + 0x10) = eax_5
                *(eax + 0x14) = sub_5defa0(ecx_1, "RegisterTouchWindow")
            
            *(result + 4) = sub_5d4930
            *(result + 8) = sub_5d4960
            *(result + 0xc) = sub_5dde90
            *(result + 0x10) = sub_5ddec0
            *(result + 0x14) = sub_5ddf60
            *(result + 0xb0) = sub_5dc360
            *(result + 0x18) = sub_5ccb70
            *(result + 0x1c) = sub_5cc440
            *(result + 0x20) = sub_5cc4c0
            *(result + 0x24) = sub_5cc520
            *(result + 0x28) = sub_5cc650
            *(result + 0x2c) = sub_5cc670
            *(result + 0x38) = sub_5cc690
            *(result + 0x3c) = sub_5cc6b0
            *(result + 0x40) = sub_5ccc70
            *(result + 0x44) = sub_5cc6d0
            *(result + 0x48) = sub_5cc6f0
            *(result + 0x4c) = sub_5cc760
            *(result + 0x50) = sub_5cc710
            *(result + 0x54) = sub_5cc780
            *(result + 0x58) = sub_5cc890
            *(result + 0x5c) = sub_5cc8f0
            *(result + 0x60) = sub_5cc950
            *(result + 0x64) = sub_5cc9c0
            *(result + 0x84) = sub_5cca20
            *(result + 0x68) = sub_603530
            *(result + 0x6c) = sub_6036e0
            *(result + 0x70) = sub_603710
            *(result + 0x74) = sub_5ccb30
            *(result + 0x78) = sub_6034d0
            *(result + 0x7c) = sub_6033d0
            *(result + 0x80) = sub_603470
            *(result + 0x88) = sub_5de020
            *(result + 0x8c) = sub_5de140
            *(result + 0x90) = sub_5de170
            *(result + 0x94) = sub_5dea80
            *(result + 0x98) = sub_5de920
            *(result + 0xa0) = sub_5de980
            *(result + 0xa4) = sub_5de9e0
            *(result + 0xa8) = sub_5dea00
            *(result + 0xac) = sub_5dea20
            *(result + 0xb8) = sub_603080
            *(result + 0xbc) = sub_6030d0
            *(result + 0xc0) = sub_6016d0
            *(result + 0xd4) = sub_603120
            *(result + 0xd8) = sub_603270
            *(result + 0xdc) = sub_603310
            *(result + 0x27c) = sub_5d48f0
            return result
    
    void* result_1 = result
    sub_5d0af0()
    sub_5cd050(0)
    return 0
}
