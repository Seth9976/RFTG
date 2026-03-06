// 函数名称: sub_6022d0
// 虚拟地址: 0x6022d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_6022d0(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* result = *(arg2 + 0x1508)
    var_8 = nullptr
    
    if (result != 0)
        result = (**result)(result, 0x8360a0, &var_8)
        
        if (result s>= 0)
            int32_t* eax_1 = var_8
            (*(*eax_1 + 0x10))(eax_1, *(arg2 + 0x150c))
            int32_t* eax_3 = var_8
            (*(*eax_3 + 0x10))(eax_3, *(arg2 + 0x1510))
            int32_t* eax_5 = var_8
            
            if (eax_5 != 0)
                (*(*eax_5 + 8))(eax_5)
                var_8 = nullptr
            
            int32_t* eax_6 = *(arg2 + 0x1508)
            (*(*eax_6 + 0x10))(eax_6)
            int32_t* eax_7 = *(arg2 + 0x1508)
            
            if (eax_7 != 0)
                (*(*eax_7 + 8))(eax_7)
                *(arg2 + 0x1508) = 0
            
            sub_601f90(*(arg2 + 0x151c))
            void* ecx_6 = *(arg2 + 0x1520)
            *(arg2 + 0x151c) = 0
            result = sub_601f90(ecx_6)
            *(arg2 + 0x1520) = 0
    
    return result
}
