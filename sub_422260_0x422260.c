// 函数名称: sub_422260
// 虚拟地址: 0x422260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_422260()
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    void* result = sub_4218c0(sub_41efc0(&var_8), var_8, fconvert.s(float.t(1)))
    
    if (result.b != 0)
        result = *(data_27e7a40 + 0x548)
        *(result + 0x2c0a4) = 0xc
    
    return result
}
