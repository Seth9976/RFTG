// 函数名称: sub_6020e0
// 虚拟地址: 0x6020e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_6020e0(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    bool cond:0 = *(arg2 + 0x1508) == 0
    var_8 = nullptr
    
    if (cond:0 || *(arg2 + 0x150c) != 0xffffffff)
        return 
    
    int32_t* eax_1 = *(arg2 + 0x1508)
    
    if ((**eax_1)(eax_1, 0x8360a0, &var_8) s< 0)
        return 
    
    int32_t* eax_3 = var_8
    (*(*eax_3 + 0xc))(eax_3, 0x8360e0, *(arg2 + 0x151c), arg2 + 0x150c)
    int32_t* eax_5 = var_8
    (*(*eax_5 + 8))(eax_5)
}
