// 函数名称: sub_67bc70
// 虚拟地址: 0x67bc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t (**sub_67bc70(void* arg1))(int32_t* arg1)
{
    // 第一条实际指令: int32_t (** result)(int32_t* arg1) = (**(arg1 + 4))(arg1, 0, 0x1c)
    int32_t (** result)(int32_t* arg1) = (**(arg1 + 4))(arg1, 0, 0x1c)
    *(arg1 + 0x1b4) = result
    *result = sub_67bb30
    result[1] = sub_67bc00
    result[2] = sub_67bae0
    result[3] = sub_67bc50
    result[4] = 0
    result[5] = 0
    result[6] = 1
    return result
}
