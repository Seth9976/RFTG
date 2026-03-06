// 函数名称: sub_463cf0
// 虚拟地址: 0x463cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_463cf0(void* arg1)
{
    // 第一条实际指令: void* esi = *(data_27e7a40 + 0x548)
    void* esi = *(data_27e7a40 + 0x548)
    int32_t edi = *(arg1 + 0x1c)
    int32_t edx
    edx.b = sub_41d0d0() == 1
    *(esi + 0x2c0b4) = edx
    *(esi + 0x2c0ac) = sub_41d1a0(edi, sub_41d0d0() != 1)
    int32_t* result_1
    
    if (sub_419400(&result_1) != 0 && *result_1 == 0x31)
        sub_419340()
    
    int32_t* result = sub_419400(&result_1)
    
    if (result.b != 0)
        result = result_1
        
        if (*result == 0x30)
            return sub_419340()
    
    return result
}
