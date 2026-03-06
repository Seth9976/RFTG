// 函数名称: sub_602150
// 虚拟地址: 0x602150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_602150(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* result = *(arg2 + 0x1508)
    var_8 = nullptr
    
    if (result != 0 && *(arg2 + 0x150c) != 0xffffffff)
        result = (**result)(result, 0x8360a0, &var_8)
        
        if (result s>= 0)
            int32_t* eax_1 = var_8
            (*(*eax_1 + 0x10))(eax_1, *(arg2 + 0x150c))
            int32_t* eax_3 = var_8
            *(arg2 + 0x150c) = 0xffffffff
            return (*(*eax_3 + 8))(eax_3)
    
    return result
}
