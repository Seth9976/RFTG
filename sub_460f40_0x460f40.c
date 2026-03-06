// 函数名称: sub_460f40
// 虚拟地址: 0x460f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_460f40(void* arg1)
{
    // 第一条实际指令: sub_4dad50()
    sub_4dad50()
    sub_460d30(arg1)
    float var_24
    sub_405e30(&var_24, &data_840a00, &data_840a00)
    float var_14 = var_24
    int32_t var_20
    int32_t var_10 = var_20
    int32_t var_1c
    int32_t var_c = var_1c
    int32_t var_18
    int32_t var_8 = var_18
    int80_t result = sub_4da420(&var_14)
    void* eax_3 = data_27e7fe4
    __builtin_memcpy(eax_3 + 0x9c, 0x83faf8, 0x40)
    *(eax_3 + 0xdc) = 0
    sub_4e2080()
    return result
}
