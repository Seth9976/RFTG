// 函数名称: sub_46c3b0
// 虚拟地址: 0x46c3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_46c3b0(int32_t arg1 @ edi, char arg2)
{
    // 第一条实际指令: void var_40
    void var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* esi = *(data_27e7a40 + 0x548)
    
    if (*(esi + 0x2c078) == 1 && arg2 == 0 && *(esi + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
    
    void* result
    result.b = arg2
    *(esi + 0x210) = arg1
    *(esi + 0x2c078) = result.b
    
    if (arg1 == 0 && result.b == 0)
        *(esi + 0x214) = 1
        sub_5a6aba(eax_1 ^ &var_40)
        return result
    
    *(esi + 0x214) = 0
    sub_5a6aba(eax_1 ^ &var_40)
    return result
}
