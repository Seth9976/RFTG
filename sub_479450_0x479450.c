// 函数名称: sub_479450
// 虚拟地址: 0x479450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_479450(void* arg1, void* arg2)
{
    // 第一条实际指令: void var_50
    void var_50
    int32_t eax_1 = __security_cookie ^ &var_50
    int32_t edx
    void* eax_4 = sub_50ce70(&var_50, edx, arg2, &var_50, arg1)
    float var_2c[0x8]
    __builtin_memcpy(&var_2c, eax_4, 0x20)
    void* result = sub_478b90(eax_4, 0x30d7130, &var_2c, data_27e7a40 + 0xa8)
    sub_5a6aba(eax_1 ^ &var_50)
    return result
}
