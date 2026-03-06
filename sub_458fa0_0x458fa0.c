// 函数名称: sub_458fa0
// 虚拟地址: 0x458fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_458fa0(int32_t arg1, int32_t arg2 @ edi, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* eax_1 = (arg1 + (arg3 << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
    void* eax_1 = (arg1 + (arg3 << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
    int32_t ecx_2 = *(eax_1 + 0x114)
    *(eax_1 + 0x114) = ecx_2 + 1
    *(eax_1 + 0x2c) = 1
    *(eax_1 + ecx_2 * 0x18 + 0x54) = 0
    *(eax_1 + ecx_2 * 0x18 + 0x5c) = sub_458f40(arg5)
    *(eax_1 + ecx_2 * 0x18 + 0x60) = sub_458f40(arg6)
    *(eax_1 + ecx_2 * 0x18 + 0x64) = arg7
    void* ecx_7 = data_27e7a40
    int32_t eax_6 = (arg4 + (arg3 << 2)) * 0x1c0
    *(eax_1 + ecx_2 * 0x18 + 0x58) = arg2
    int32_t entry_ebx
    *(eax_1 + ecx_2 * 0x18 + 0x68) = entry_ebx
    int32_t edx_4 = *(ecx_7 + 0x548)
    int32_t ecx_8 = *(eax_6 + edx_4 + 0x2c1d4)
    *(eax_6 + edx_4 + 0x2c1d4) = ecx_8 + 1
    *(eax_6 + edx_4 + 0x2c0ec) = 1
    *(eax_6 + edx_4 + 0x2c0c0 + ecx_8 * 0x18 + 0x54) = 1
    *(eax_6 + edx_4 + 0x2c0c0 + ecx_8 * 0x18 + 0x5c) = sub_458f40(arg5)
    *(eax_6 + edx_4 + 0x2c0c0 + ecx_8 * 0x18 + 0x60) = sub_458f40(arg6)
    *(eax_6 + edx_4 + 0x2c0c0 + ecx_8 * 0x18 + 0x58) = arg2
    *(eax_6 + edx_4 + 0x2c0c0 + ecx_8 * 0x18 + 0x64) = arg7
    *(eax_6 + edx_4 + 0x2c0c0 + ecx_8 * 0x18 + 0x68) = entry_ebx
    return arg7
}
