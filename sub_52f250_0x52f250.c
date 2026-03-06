// 函数名称: sub_52f250
// 虚拟地址: 0x52f250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_52f250(void* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: sub_4c4510(arg2)
    sub_4c4510(arg2)
    *(arg1 + 4) = arg2[1]
    *(arg1 + 8) = fconvert.s(fconvert.t(arg2[2]))
    *(arg1 + 0xc) = arg2[3]
    *(arg1 + 0x10) = arg2[4]
    *(arg1 + 0x14) = arg2[5]
    *(arg1 + 0x18) = arg2[6]
    *(arg1 + 0x1c) = arg2[7]
    *(arg1 + 0x20) = arg2[8]
    *(arg1 + 0x24) = arg2[9]
    *(arg1 + 0x28) = arg2[0xa]
    *(arg1 + 0x2c) = arg2[0xb]
    *(arg1 + 0x30) = arg2[0xc]
    *(arg1 + 0x34) = arg2[0xd]
    *(arg1 + 0x38) = fconvert.s(fconvert.t(arg2[0xe]))
    *(arg1 + 0x3c) = arg2[0xf]
    *(arg1 + 0x40) = arg2[0x10]
    *(arg1 + 0x44) = arg2[0x11]
    *(arg1 + 0x48) = arg2[0x12]
    *(arg1 + 0x4c) = fconvert.s(fconvert.t(arg2[0x13]))
    int32_t ecx_4
    ecx_4.b = arg2[0x14].b
    *(arg1 + 0x50) = ecx_4.b
    int32_t edx_4
    edx_4.b = *(arg2 + 0x51)
    *(arg1 + 0x51) = edx_4.b
    int32_t eax_5
    eax_5.b = *(arg2 + 0x52)
    *(arg1 + 0x52) = eax_5.b
    *(arg1 + 0x54) = arg2[0x15]
    *(arg1 + 0x58) = arg2[0x16]
    return arg1
}
