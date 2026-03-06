// 函数名称: sub_41d430
// 虚拟地址: 0x41d430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41d430(int32_t arg1)
{
    // 第一条实际指令: void* esi = *(data_27e7a40 + 0x548)
    void* esi = *(data_27e7a40 + 0x548)
    int32_t ecx
    ecx.b = sub_41d0d0() == 1
    *(esi + 0x2c0b4) = ecx
    *(esi + 0x2c0ac) = sub_41d1a0(arg1, sub_41d0d0() != 1)
    int32_t* var_8
    
    if (sub_419400(&var_8) != 0 && *var_8 == 0x31)
        sub_419340()
    
    char result = sub_419400(&var_8)
    
    if (result != 0 && *var_8 == 0x30)
        result = sub_419340()
    
    *(esi + 0xbfcc) = fconvert.s(float.t(0))
    return result
}
