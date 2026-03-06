// 函数名称: sub_598c10
// 虚拟地址: 0x598c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598c10(void* arg1 @ esi)
{
    // 第一条实际指令: __chkstk(0x36b0)
    __chkstk(0x36b0)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void* var_36b4
    int32_t* var_8_1 = &var_36b4
    var_36b4 = arg1
    char var_30 = 0xff
    int32_t result
    
    if (sub_596d80(var_8_1) == 0xd8)
        result = 1
    else
        data_273ac1c = "no SOI"
        result = 0
    
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    sub_5a6aba(var_8_1 ^ &__saved_ebp)
    return result
}
