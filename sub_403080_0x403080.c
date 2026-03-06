// 函数名称: sub_403080
// 虚拟地址: 0x403080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_403080(char arg1)
{
    // 第一条实际指令: int128_t* ebx = data_27e7a40
    int128_t* ebx = data_27e7a40
    
    if (*(ebx + 0x18) != 0)
        sub_4c5870("!gCClient->initialized", &data_83f3d3, "..\code\CClient.cpp", 0xdd, "CClientInit")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_5abfc0(ebx, 0, 0x3188e8)
    void* esi = data_27e7fd0
    *(ebx + 0x18) = 1
    *(ebx + 0x74) = 0xffffffff
    
    if (*(esi + 0x27) != 0)
        sub_4b9e80(&ebx[0x35])
        ebx = data_27e7a40
        esi = data_27e7fd0
    
    long double x87_r7 = fconvert.t(0.52359879016876221)
    int32_t mxcsr
    int16_t x87control
    void* result = sub_68b980(mxcsr, x87control, x87_r7)
    *(ebx + 0x3c) = fconvert.s(fconvert.t(fconvert.s(x87_r7)))
    *(ebx + 0x6c) = 0
    *(ebx + 0x44) = fconvert.s(fconvert.t(0.100000001f))
    *(ebx + 0x48) = fconvert.s(fconvert.t(100f))
    ebx[7].d = fconvert.s(float.t(0))
    ebx[4].d = fconvert.s(float.t(*(esi + 0x18)) / float.t(*(esi + 0x14)))
    __builtin_memcpy(ebx + 0x4c, &data_be4c5c, 0x20)
    
    if (arg1 != 0)
        return result
    
    sub_405670(ebx + 0x54c)
    data_307c5a0
    sub_505790(data_27e7a40 + 0x56c, 0x84880c, 7)
    sub_416a30(data_27e7a40 + 0x638)
    sub_4b4f80(data_27e7a40 + 0x95c)
    void* esi_2 = data_27e7a40
    int32_t eax_3
    int80_t st0_2
    st0_2, eax_3 = sub_4f6f00(data_307c1a0)
    int32_t* ecx_6 = data_307c1a4
    *(esi_2 + 0xa04) = eax_3
    void* esi_3 = data_27e7a40
    int32_t eax_4
    int80_t st0_3
    st0_3, eax_4 = sub_4f6f00(ecx_6)
    *(esi_3 + 0xa18) = eax_4
    return sub_41ddc0()
}
